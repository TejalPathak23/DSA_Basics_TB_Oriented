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
    cout<<"\n........Matrix Addition........\n";

    cout<<"\n........ 1. Create 2-D Array........";
     int size = 3;      //Square Matrix R = C = size

     int A[3][3];     //Memory Allocation for 4*4 values
     int B[3][3];
     int C[3][3];

     cout<<"\n........ 2. Insert in 2-D Array........";
     cout<<"\n\t For Matrix A[3][3]: ";
     int i,j;
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

    cout<<"\n\t For Matrix Addition C[3][3] = A[3][3] + B[3][3]";
    for(i=0; i<size; i++)      //....for rows
    {
         for(j=0; j<size; j++) //....for columns
         {
             C[i][j] = A[i][j] + B[i][j];
         }
    } 

    cout<<"\n Matrix A: ";
    dispMtx(A, 3, 3);

    cout<<"\n Matrix B: ";
    dispMtx(B, 3, 3);

    cout<<"\n Matrix C = A + B: ";
    dispMtx(C, 3, 3);

 return 0 ;
 }

 /*-------------------------OUTPUT--------------------
 
 ........Matrix Addition........        

........ 1. Create 2-D Array........   
........ 2. Insert in 2-D Array........
         For Matrix A[3][3]:
         Enter for A[0][0] : 1

         Enter for A[0][1] : 2

         Enter for A[0][2] : 3

         Enter for A[1][0] : 1

         Enter for A[1][1] : 2

         Enter for A[1][2] : 3

         Enter for A[2][0] : 1

         Enter for A[2][1] : 2

         Enter for A[2][2] : 3

         For Matrix B[3][3]:
         Enter for B[0][0] : 4

         Enter for B[0][1] : 4

         Enter for B[0][2] : 4

         Enter for B[1][0] : 4

         Enter for B[1][1] : 4

         Enter for B[1][2] : 4

         Enter for B[2][0] : 4

         Enter for B[2][1] : 4

         Enter for B[2][2] : 4

         For Matrix Addition C[3][3] = A[3][3] + B[3][3]
 Matrix A:
           1  2  3
           1  2  3
           1  2  3
 
 Matrix B:
           4  4  4
           4  4  4
           4  4  4
 
 Matrix C = A + B:
           5  6  7
           5  6  7
           5  6  7
PS F:\Coding Practise\DS Algo Tution\DSA Class Codes>
 
 */