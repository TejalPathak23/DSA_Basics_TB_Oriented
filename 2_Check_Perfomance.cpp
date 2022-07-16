//..................Program FOR SEARCHING KEYS IN THE LIST

//....................................Header Files
#include <iostream>
using namespace std;

//....................................List and Comparisons Array

int List[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}; // Global variable
 int Comp[10];

//....................................Function to check Comparisons and return cases
char *checkCase(int cmp)
{
    if (cmp >= 1 && cmp<= 3)
    {
        cout << "\t ";
        return "Best Case";
    }
    else if (cmp >= 4 && cmp<= 8)
    {
        cout << "\t ";
        return  "Average Case";
    }
    else
    {
        cout << "\t ";
        return  "Worst Case";
    }
}

//....................................Main Functions....................................
int main()
{
    int Key;
    int i, j;

    cout << "\n .....To check Performance: Best, Average and Worst Case......\n";
    cout<<"\n FOR SEARCHING KEYS IN THE LIST \n";

    // cout<<"\n Enter the Key to Search: ";
    // cin>>Key;

    // for(i=0; i<10; i++)
    // {
    //     if(Key == List[i])
    //     {
    //         cout<<"\n Key Found: ";
    //         break;
    //     }
    // }
    // if(i == 10)
    //     cout<<"\n Key Not Found: ";

    int count;
    int k = 0;
   
    //..............For Key Not in the List
    cout << "\n Key  Comparisons   Case: \n";

    for (i = 0; i < 10; i++) //To copy Key from List
    {
        Key = List[i];
        count = 0;

        for (j = 0; j < 10; j++) //To compare in List
        {
            if (Key == List[j])
            {
                count++;
                break;
            }
            else
            {
                count++;
            }
        }
        Comp[k] = count;
        k++;
    }

    for (i = 0; i < 10; i++)
    {
        cout << "\n ";
        cout << List[i];
        cout << "\t ";
        cout << Comp[i];
        cout << "\t ";
        cout << checkCase(Comp[i]);
    }

    //..............For Key Not in the List
    Key = 101;
    count = 0;

    for (j = 0; j < 10; j++) //To compare in List
    {
        if (Key == List[j])
        {
            count++;
            break;
        }
        else
        {
            count++;
        }
    }

    cout << "\n ";
    cout << Key;
    cout << "\t ";
    cout << count;
    cout << "\t ";
    cout << checkCase(Comp[i]);
    
    return 0;
}

/*----------------------OUTPUT------------------------------

.....To check Performance: Best, Average and Worst Case......
FOR SEARCHING KEYS IN THE LIST
 Key  Comparisons   Case:

 10      1               Best Case
 20      2               Best Case
 30      3               Best Case
 40      4               Average Case
 50      5               Average Case
 60      6               Average Case
 70      7               Average Case
 80      8               Average Case
 90      9               Worst Case
 100     10              Worst Case
 101     10              Worst Case

PS F:\Coding Practise\DS Algo Tution\DSA Class Codes>

------------------------------------------------------------------*/