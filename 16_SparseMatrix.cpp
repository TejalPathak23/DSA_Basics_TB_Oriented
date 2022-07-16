 #include<iostream>
 using namespace std;
 int main()
 {
     cout<<"\n\n .......Sparse Matrix Representation.........\n";

     int A[3][3];
     

     int i, j, size = 3;

     cout<<"\n\t Insert Values in Matrix: ";   
     for(i=0; i<size; i++)
     {
         for(j=0; j<size; j++)
         {
             cout<<"\n Enter value at A["<<i<<"]["<<j<<"]: ";
             cin>>A[i][j];
         }
     }

    cout<<"\n\t Sparse Matrix: ";
     for(i=0; i<size; i++)
     {
         cout<<"\n\t";
         for(j=0; j<size; j++)
         {
             cout<<"  "<<A[i][j];
         }
     }

     int cnt = 0;

     
    //  for(i=0; i<size; i++)      //To count no of Non-zero elements
    //  {
    //      for(j=0; j<size; j++)
    //      {
    //          if(A[i][j] != 0)
    //             cnt++;
    //      }
    //  }
    //  int Row = cnt;
    // int col = 3; //R,C,Value

    //  int compact[Row][Col];

     cout<<"\n\t ....Compact Representation of Sparse Matrix.....";
     
     int compact[3][3];
     int k = 0;  //Row = k
     for(i=0; i<size; i++)      //To count no of Non-zero elements
    {
         for(j=0; j<size; j++)
         {
             if(A[i][j] != 0)
             {
                 compact[k][0] = i; //Row
                 compact[k][1] = j; //Col
                 compact[k][2] = A[i][j]; //Value
                 k++;
             }  
         }
     }
     cout<<"\n\t Row Column Value";
     for(i=0; i<k; i++)      //To count no of Non-zero elements
    {
        cout<<"\n\t";
         for(j=0; j<3; j++)
         {
             cout<<"  "<<compact[i][j];
         }
     }
     

 return 0 ;
 }

 /*
 --------------------OUTPUT----------------------
 
 .......Sparse Matrix Representation.........

         Insert Values in Matrix:
 Enter value at A[0][0]: 0

 Enter value at A[0][1]: 0

 Enter value at A[0][2]: 12

 Enter value at A[1][0]: 0

 Enter value at A[1][1]: 0

 Enter value at A[1][2]: 0

 Enter value at A[2][0]: 11

 Enter value at A[2][1]: 0

 Enter value at A[2][2]: 13

         Sparse Matrix:
          0  0  12
          0  0  0
          11  0  13
         ....Compact Representation of Sparse Matrix.....
         Row Column Value
          0     2   12
          2     0   11
          2     2   13


PS F:\Coding Practise\DS Algo Tution\DSA Class Codes> 
 */