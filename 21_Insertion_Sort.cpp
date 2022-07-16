//Program : On Insertion Sort

#include <iostream>
using namespace std;

int main()
{
    cout<<"\n\t ........Program : On Insertion Sort.........";

    int i, j, k;

    int list[7] = {205, 310, 110, 151, 101, 215, 555};
    int temp, size = 7;

    cout << "\n\t List: ";
    for (i = 0; i < size; i++)
    {
        cout << "  " << list[i];
    }

    for (i = 1; i < size; i++) //...Passes & element to start with
    {
        for (j = 0; j < i; j++) //....Comparisons
        {
            if (list[j] > list[i])
            {
                temp = list[i];
                for (k = i - 1; k >= j; k--) //...Shifting
                {
                    list[k + 1] = list[k];
                }
                list[j] = temp;
            }
        }
        cout << "\n\t Pass" << i << " : ";
        for (k = 0; k < size; k++)
        {
            cout << "  " << list[k];
        }
    }

    return 0;
}

/*   

........Program : On Insertion Sort.........
         List:   5  4  3  2  1
         Pass1 :   4  5  3  2  1
         Pass2 :   3  4  5  2  1
         Pass3 :   2  3  4  5  1
         Pass4 :   1  2  3  4  5

 ........Program : On Insertion Sort.........
         List:   205  310  110  151  101  215  555
         Pass1 :   205  310  110  151  101  215  555
         Pass2 :   110  205  310  151  101  215  555
         Pass3 :   110  151  205  310  101  215  555
         Pass4 :   101  110  151  205  310  215  555
         Pass5 :   101  110  151  205  215  310  555
         Pass6 :   101  110  151  205  215  310  555
*/