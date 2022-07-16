//  Program for Addition of 2 Arrays

 #include<iostream>
 using namespace std;

 void dispMtx(int X[4][4], int R, int C)    //....Formal Parameters
 {  
     int i,j; 
     for(i=0; i<R; i++)
     {
         cout<<"\n";
         for(j=0; j<C; j++)
         {
             cout<<"  "<<X[i][j];
         }
     }
 }

 int main()
 {
     int A[4][4], B[4][4], C[4][4];     //....Array Declarations
     int i,j;

     for(i=0; i<4; i++)  // For initialization of matrix A
     {
         for(j=0; j<4; j++)
         {
             cout<<"\n Enter at A["<<i<<"]["<<j<<"] : ";
             cin>>A[i][j];
         }
     }
 
     for(i=0; i<4; i++) // For initialization of matrix B
     {
         for(j=0; j<4; j++)
         {
             cout<<"\n Enter at B["<<i<<"]["<<j<<"] : ";
             cin>>B[i][j];
         }
     }

     for(i=0; i<4; i++) // For Addition of Matrix A and B
     {
         for(j=0; j<4; j++)
         {
             C[i][j] = A[i][j] + B[i][j];
         }
     }
    cout<<"\n Matrix A :..........";
    dispMtx(A, 4, 4);       //....Actual Parameters

    cout<<"\n Matrix B :..........";
    dispMtx(B, 4, 4);

    cout<<"\n Matrix C :..........";
    dispMtx(C, 4, 4);

 return 0 ;
 }

 /*-----------------OUTPUT-----------------------------------------------

Enter at A[0][0] : 2

 Enter at A[0][1] : 2

 Enter at A[0][2] : 2

 Enter at A[0][3] : 2

 Enter at A[1][0] : 2

 Enter at A[1][1] : 2

 Enter at A[1][2] : 2

 Enter at A[1][3] : 2

 Enter at A[2][0] : 2

 Enter at A[2][1] : 2

 Enter at A[2][2] : 2

 Enter at A[2][3] : 2

 Enter at A[3][0] : 2

 Enter at A[3][1] : 2

 Enter at A[3][2] : 2

 Enter at A[3][3] : 2

 Enter at B[0][0] : 6

 Enter at B[0][1] : 6

 Enter at B[0][2] : 6

 Enter at B[0][3] : 6

 Enter at B[1][0] : 6

 Enter at B[1][1] : 6

 Enter at B[1][2] : 6

 Enter at B[1][3] : 6

 Enter at B[2][0] : 6

 Enter at B[2][1] : 6

 Enter at B[2][2] : 6

 Enter at B[2][3] : 6

 Enter at B[3][0] : 6

 Enter at B[3][1] : 6

 Enter at B[3][2] : 6

 Enter at B[3][3] : 6

 Matrix A :..........
  2  2  2  2
  2  2  2  2
  2  2  2  2
  2  2  2  2
 Matrix B :..........
  6  6  6  6
  6  6  6  6
  6  6  6  6
  6  6  6  6
 Matrix C :..........
  8  8  8  8
  8  8  8  8
  8  8  8  8
  8  8  8  8
PS F:\Coding Practise> 

 */
