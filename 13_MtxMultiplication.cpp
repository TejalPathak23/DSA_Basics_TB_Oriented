 #include<iostream>
 using namespace std;

 void dispMtx(int X[3][3], int R, int C)
 {
     int i,j;
     for(i=0; i<R; i++)      //....for rows
     {
         cout<<"\n\t ";
         for(j=0; j<C; j++) //....for columns
         {
             cout<<"  "<<X[i][j];
         }
     }
 }


 int main()
 {
    cout<<"\n........Matrix Multiplication........\n";

    cout<<"\n........ 1. Create 2-D Array........";
    
    int size = 3;

     int A[3][3];     
     int B[3][3];
     int C[3][3];

     cout<<"\n........ 2. Insert in 2-D Array........";

     cout<<"\n\t For Matrix A[3][3]: ";

     int i,j,k;

     for(i=0; i<size; i++)      //....for rows
     {
         for(j=0; j<size; j++) //....for columns
         {
             cout<<"\n\t Enter for A["<<i<<"]["<<j<<"] : ";
             cin>>A[i][j];
         }
     }

     cout<<"\n\t For Matrix B[3][3]: ";
     
     for(i=0; i<size; i++)      //....for rows
     {
         for(j=0; j<size; j++) //....for columns
         {
             cout<<"\n\t Enter for B["<<i<<"]["<<j<<"] : ";
             cin>>B[i][j];
         }
     }

     for(i=0; i<size; i++)      //....for rows of Mtx-A : R1
     {
         for(j=0; j<size; j++) //....for columns of Mtx-B : C2
         {
             C[i][j] = 0;
            for(k=0; k<size; k++) //....for rows of Mtx-B : R2
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
         }
     }

    cout<<"\n Matrix A: ";
    dispMtx(A, 3, 3);

    cout<<"\n Matrix B: ";
    dispMtx(B, 3, 3);

    cout<<"\n Matrix C[][] = A[][] * B[][] ";
    dispMtx(C, 3, 3);

 return 0 ;
 }

 /*

........Matrix Multiplication........  

........ 1. Create 2-D Array........   
........ 2. Insert in 2-D Array........
         For Matrix A[3][3]: 
         Enter for A[0][0] : 1

         Enter for A[0][1] : 1

         Enter for A[0][2] : 1

         Enter for A[1][0] : 2

         Enter for A[1][1] : 2

         Enter for A[1][2] : 2

         Enter for A[2][0] : 3

         Enter for A[2][1] : 3

         Enter for A[2][2] : 3

         For Matrix B[3][3]:
         Enter for B[0][0] : 2

         Enter for B[0][1] : 2

         Enter for B[0][2] : 2

         Enter for B[1][0] : 2

         Enter for B[1][1] : 2

         Enter for B[1][2] : 2

         Enter for B[2][0] : 2

         Enter for B[2][1] : 2

         Enter for B[2][2] : 2

 Matrix A:
           1  1  1
           2  2  2
           3  3  3
 Matrix B:
           2  2  2
           2  2  2
           2  2  2
 Matrix C[][] = A[][] * B[][]
           6  6  6
           12  12  12
           18  18  18

PS F:\Coding Practise\DS Algo Tution\DSA Class Codes> 

 */