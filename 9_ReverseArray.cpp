#include <iostream>
using namespace std;
int main()
{
    int i, j, k;
    int sizeA = 7;

    char A[7] = {'W', 'E', 'L', 'C', 'O', 'M', 'E'};
    char B[7];

    i = sizeA - 1;
    j = 0;

    while (i >= 0)
    {
        B[j] = A[i];
        i--;
        j++;
    }

    cout << "\n Array A[] = ";
    for (i = 0; i < sizeA; i++)
        cout << "  " << A[i];

    cout << "\n Array B[] = ";
    for (i = 0; i < j; i++)
        cout << "  " << B[i];

    return 0;
}

/****************************************************************
  
  Array A[] =   W  E  L  C  O  M  E
 Array B[] =   E  M  O  C  L  E  W

  */