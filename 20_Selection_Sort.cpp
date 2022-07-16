//Program : Selection Sort

#include <iostream>
using namespace std;

int main()
{
    int list[5] = {5, 4, 3, 2, 1};

    int i, j, k, size = 5;

    cout << "\n\t Original List: ";
    for (i = 0; i < size; i++)
        cout << "  " << list[i];

    for (i = 0; i < size - 1; i++) //...Passes = n-1
    {
        for (j = i + 1; j < size; j++) //...Comparisons
        {
            if (list[i] > list[j])
            {
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
        cout << "\n\t Pass" << i + 1 << " : ";
        for (k = 0; k < size; k++)
            cout << "  " << list[k];
    }
    return 0;
}

/*   

 Original List:   5  4  3  2  1
         Pass1 :   1  5  4  3  2
         Pass2 :   1  2  5  4  3
         Pass3 :   1  2  3  5  4
         Pass4 :   1  2  3  4  5

*/ 