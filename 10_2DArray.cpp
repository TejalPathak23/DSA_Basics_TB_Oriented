 #include<iostream>
 using namespace std;
 int main()
 {
     cout<<"\n........ 1. Create 2-D Array........";
     int size = 4;      //Square Matrix R = C = size

     int A[4][4];     //Memory Allocation for 4*4 values
     int B[4][4];

     cout<<"\n........ 2. Insert in 2-D Array........";
     cout<<"\n\t Row Major Storage";
     int i,j;
     for(i=0; i<size; i++)      //....for rows
     {
         for(j=0; j<size; j++) //....for columns
         {
             cout<<"\n\t Enter for A["<<i<<"]["<<j<<"] : ";
             cin>>A[i][j];
         }
     }

     cout<<"\n........ 3. Insert in 2-D Array........";
     cout<<"\n\t Column Major Storage";
     for(i=0; i<size; i++)      //....for Column
     {
         for(j=0; j<size; j++) //....for Rows
         {
             cout<<"\n\t Enter for B["<<j<<"]["<<i<<"] : ";
             cin>>B[j][i];
         }
     }

    cout<<"\n........ 4. Display 2-D Array........";
     cout<<"\n\t Row Major Storage";
  
     for(i=0; i<size; i++)      //....for rows
     {
         cout<<"\n\t";
         for(j=0; j<size; j++) //....for columns
         {
             cout<<"\n A["<<i<<"]["<<j<<"] : "<<A[i][j];
         }
     }

     cout<<"\n........ 5. Display 2-D Array........";
     cout<<"\n\t Column Major Storage";
 
     for(i=0; i<size; i++)      //....for Column
     {
         cout<<"\n\t";
         for(j=0; j<size; j++) //....for Rows
         {
             cout<<"\n B["<<j<<"]["<<i<<"] : "<<B[j][i];
         }
     }

     cout<<"\n........ 6. Display 2-D Array in Matrix Form........";
     cout<<"\n\t Row Major Storage";
  
     for(i=0; i<size; i++)      //....for rows
     {
         cout<<"\n\t";
         for(j=0; j<size; j++) //....for columns
         {
             cout<<"  "<<A[i][j];
         }
     }

     cout<<"\n........ 7. Display 2-D Array in matrix form........";
     cout<<"\n\t Column Major Storage";
 
     for(i=0; i<size; i++)      //....for Column
     {
         cout<<"\n\t";
         for(j=0; j<size; j++) //....for Rows
         {
             cout<<"   "<<B[j][i];
         }
     }

 return 0 ;
 }

 /*-------OUTPUT------------------------------------------------

........ 1. Create 2-D Array........

........ 2. Insert in 2-D Array........
         Row Major Storage
         Enter for A[0][0] : 1

         Enter for A[0][1] : 1

         Enter for A[0][2] : 1

         Enter for A[0][3] : 1

         Enter for A[1][0] : 1

         Enter for A[1][1] : 1

         Enter for A[1][2] : 1

         Enter for A[1][3] : 1

         Enter for A[2][0] : 1

         Enter for A[2][1] : 1

         Enter for A[2][2] : 1

         Enter for A[2][3] : 1

         Enter for A[3][0] : 1

         Enter for A[3][1] : 1

         Enter for A[3][2] : 1

         Enter for A[3][3] : 1

........ 3. Insert in 2-D Array........
         Column Major Storage
         Enter for B[0][0] : 4

         Enter for B[1][0] : 4

         Enter for B[2][0] : 4

         Enter for B[3][0] : 4

         Enter for B[0][1] : 4

         Enter for B[1][1] : 4

         Enter for B[2][1] : 4

         Enter for B[3][1] : 4

         Enter for B[0][2] : 4

         Enter for B[1][2] : 4

         Enter for B[2][2] : 4

         Enter for B[3][2] : 4

         Enter for B[0][3] : 4

         Enter for B[1][3] : 4

         Enter for B[2][3] : 4

         Enter for B[3][3] : 4

........ 4. Display 2-D Array........
         Row Major Storage

 A[0][0] : 1
 A[0][1] : 1
 A[0][2] : 1
 A[0][3] : 1

 A[1][0] : 1
 A[1][1] : 1
 A[1][2] : 1
 A[1][3] : 1

 A[2][0] : 1
 A[2][1] : 1
 A[2][2] : 1
 A[2][3] : 1

 A[3][0] : 1
 A[3][1] : 1
 A[3][2] : 1
 A[3][3] : 1

........ 5. Display 2-D Array........
         Column Major Storage

 B[0][0] : 4
 B[1][0] : 4
 B[2][0] : 4
 B[3][0] : 4

 B[0][1] : 4
 B[1][1] : 4
 B[2][1] : 4
 B[3][1] : 4

 B[0][2] : 4
 B[1][2] : 4
 B[2][2] : 4
 B[3][2] : 4

 B[0][3] : 4
 B[1][3] : 4
 B[2][3] : 4
 B[3][3] : 4

 
........ 6. Display 2-D Array in Matrix Form........
         Row Major Storage
          1  1  1  1
          1  1  1  1
          1  1  1  1
          1  1  1  1


........ 7. Display 2-D Array in matrix form........
         Column Major Storage
           4   4   4   4
           4   4   4   4
           4   4   4   4
           4   4   4   4

  */