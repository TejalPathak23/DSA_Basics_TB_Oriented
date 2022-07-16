//Program : Quick Sort

#include <iostream>
using namespace std;

void Quick_Sort(int Ary[8], int low, int high)
{
    int temp, pivot, i, j;

    if (low >= high)
        return;
    else
    {
        i = low;
        j = high;
        pivot = Ary[i];

        while (i < j)
        {
            while (Ary[i] <= pivot)
                i++;

            while (Ary[j] > pivot)
                j--;

            if (i < j) //....Swap A[i] with A[j]
            {
                temp = Ary[i];
                Ary[i] = Ary[j];
                Ary[j] = temp;
            }
        }

        if (i > j)
        {
            temp = Ary[low]; //....Pivot = Ary[low]
            Ary[low] = Ary[j];
            Ary[j] = temp;

            cout<<"\n\t Pass: ";
            for(int i=0; i<8; i++)
            cout<<"  "<<Ary[i];

            Quick_Sort(Ary, low, j - 1);  //....Array1 : left subarray
            Quick_Sort(Ary, j + 1, high); //....Array2 : right subarray
        }

    }
}

int main()
{
    int Ary[8] = {10, 5, 9, 17, 12, 47, 91, 55};
    int size = 8;

    cout<<"\n\n ........Quick Sort............";

    cout<<"\n\t Unsorted List: ";
    for(int i=0; i<size; i++)
        cout<<"  "<<Ary[i];

    Quick_Sort(Ary, 0, size - 1);

    cout<<"\n\t Sorted List: ";
    for(int i=0; i<size; i++)
        cout<<"  "<<Ary[i];

    return 0;
}

/*   
........Quick Sort............
         Unsorted List:   10  5  9  17  12  47  91  55

         Pass:   9  5  10  17  12  47  91  55

         Pass:   5  9  10  17  12  47  91  55

         Pass:   5  9  10  12  17  47  91  55

         Pass:   5  9  10  12  17  47  91  55

         Pass:   5  9  10  12  17  47  55  91
         
         Sorted List:   5  9  10  12  17  47  55  91
*/