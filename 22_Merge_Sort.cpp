#include <iostream>
using namespace std;

int list[7] = {14, 19, 11, 91, 55, 43, 25};
int size = 7;

void Merge(int *Ary, int low, int mid, int high)
{
    int i, j, k, Lary[7], Rary[7], Res[7];
    //........for Left Array
    j = 0;
    for (i = low; i <= mid; i++)
    {
        Lary[j] = Ary[i];
        j++;
    }

    //........for Right Array
    i = j = 0;
    for (i = mid + 1; i <= high; i++)
    {
        Rary[j] = Ary[i];
        j++;
    }

    int Lsize = mid - low + 1; //....Size of left array
    int Rsize = high - mid;    //....Size of right array

    cout<<"\n\t Left Array: ";
    for(i=0; i< Lsize; i++)
        cout<<" "<<Lary[i];

    cout<<"\n\t Right Array: ";
    for(i=0; i< Rsize; i++)
        cout<<" "<<Rary[i];
    

    i = j = k = 0;

    while (i < Lsize && j < Rsize)
    {
        if (Lary[i] < Rary[j])
        {
            Res[k] = Lary[i];
            i++;
            k++;
        }
        else
        {
            Res[k] = Rary[j];
            j++;
            k++;
        }
    }

    if (i == Lsize) //....if left array finished
    {
        while (j < Rsize)
        {
            Res[k] = Rary[j];
            j++;
            k++;
        }
    }

    if (j == Rsize) //....if right array finished
    {
        while (i < Lsize)
        {
            Res[k] = Lary[i];
            i++;
            k++;
        }
    }

    //.......Display Resultant Array
    cout << "\n Sorted List: ";
    for (i = 0; i < k; i++)
    {
        cout << "  " << Res[i];
    }
}

void Merge_Sort(int *Ary, int low, int high) //function to divide arrays
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        Merge_Sort(Ary, low, mid);      //Left Array
        Merge_Sort(Ary, mid + 1, high); //Right Array

        Merge(Ary, low, mid, high);
    }
}


int main()
{
    int i;
     
    cout << "\n Original List: ";
    for (i = 0; i < size; i++)
    {
        cout << "  " << list[i];
    }

    //...Array, Low=0, High=size-1
    Merge_Sort(list, 0, 6); //Divide arrays

    cout << "\n Sorted List: ";
    for (i = 0; i < size; i++)
    {
        cout << "  " << list[i];
    }

    return 0;
}