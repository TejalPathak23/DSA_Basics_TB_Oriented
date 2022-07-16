//Program : Bubble Sort

#include <iostream>
using namespace std;

int main()
{
    int list[5] = {5, 4, 3, 2, 1};

    int i, j, k, size = 5;

    cout << "\n\t Original List: ";
    for (i = 0; i < size; i++)
        cout << "  " << list[i];

    for (i = 0; i < size - 1; i++) //....Passes
    {
        for (j = 0; j < size - 1; j++) //....Comparisons
        {
            if (list[j] > list[j + 1])
            {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
        cout << "\n\t Pass" << i + 1 << " : ";
        for (k = 0; k < size; k++)
            cout << "  " << list[k];
    }

    return 0;
}

/* ----------------------------------------------------------------

 Original List:   5  4  3  2  1
         Pass1 :   4  3  2  1  5
         Pass2 :   3  2  1  4  5
         Pass3 :   2  1  3  4  5
         Pass4 :   1  2  3  4  5

*/