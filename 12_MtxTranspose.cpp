 #include<iostream>
 using namespace std;


 int main()
 {
     cout<<"\n........Matrix Transpose........\n";

    cout<<"\n........ 1. Create 2-D Array........";

     int A[3][2];     
     int B[2][3];
     

     cout<<"\n........ 2. Insert in 2-D Array........";
     cout<<"\n\t For Matrix A[3][2]: ";
     int i,j;
     for(i=0; i<3; i++)      //....for rows
     {
         for(j=0; j<2; j++) //....for columns
         {
             cout<<"\n\t Enter for A["<<i<<"]["<<j<<"] : ";
             cin>>A[i][j];
         }
     }

    cout<<"\n........ 3. Transpose of Matrix A........";
     
     for(i=0; i<3; i++)      //....for rows
     {
         for(j=0; j<2; j++) //....for columns
         {
             B[j][i] = A[i][j];
         }
     }

    cout<<"\n Matrix A: "; 
    for(i=0; i<3; i++)      //....for rows
     {
         cout<<"\n\t ";
         for(j=0; j<2; j++) //....for columns
         {
             cout<<"  "<<A[i][j];
         }
     }

    cout<<"\n Transpose of A: ";
    for(i=0; i<2; i++)      //....for rows
     {
         cout<<"\n\t ";
         for(j=0; j<3; j++) //....for columns
         {
             cout<<"  "<<B[i][j];
         }
     }

 return 0 ;
 }

 /* ----------------------------------------------------------------

........Matrix Transpose........       

........ 1. Create 2-D Array........   
........ 2. Insert in 2-D Array........
         For Matrix A[3][2]:
         Enter for A[0][0] : 1

         Enter for A[0][1] : 2

         Enter for A[1][0] : 3

         Enter for A[1][1] : 4

         Enter for A[2][0] : 5

         Enter for A[2][1] : 6

........ 3. Transpose of Matrix A........
 Matrix A:
           1  2
           3  4
           5  6
 Transpose of A:
           1  3  5
           2  4  6
PS F:\Coding Practise\DS Algo Tution\DSA Class Codes>


 */