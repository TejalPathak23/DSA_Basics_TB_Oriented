 #include<iostream>
 using namespace std;
 
 int main()
 {
     cout<<"\n ..........Transpose of Sparse Matrix...............";

     char Spa[4][4];

     char Tra[4][4];

     int i, j, size = 4;

     cout<<"\n\t Enter the characters in Sparse Matrix: ";
     for(i=0; i < size; i++)
     {
         for(j=0; j< size; j++)
         {
             cout<<"\n Enter value at Spa["<<i<<"]["<<j<<"]: ";
             cin>>Spa[i][j];
         }
     }

     for(i=0; i < size; i++)
     {
         for(j=0; j< size; j++)
         {
             Tra[i][j] = Spa[j][i];
         }
     }


     cout<<"\n\t Sparse Matrix: ";
     for(i=0; i<size; i++)
     {
         cout<<"\n\t";
         for(j=0; j<size; j++)
         {
             cout<<"  "<<Spa[i][j];
         }
     }

     cout<<"\n\t Transpose of Sparse Matrix: ";
     for(i=0; i<size; i++)
     {
         cout<<"\n\t";
         for(j=0; j<size; j++)
         {
             cout<<"  "<<Tra[i][j];
         }
     }



 return 0 ;
 }

 /*
..........Transpose of Sparse Matrix...............

         Enter the characters in Sparse Matrix:     
 Enter value at Spa[0][0]: A

 Enter value at Spa[0][1]: -

 Enter value at Spa[0][2]: -

 Enter value at Spa[0][3]: -

 Enter value at Spa[1][0]: -

 Enter value at Spa[1][1]: -

 Enter value at Spa[1][2]: B

 Enter value at Spa[1][3]: -

 Enter value at Spa[2][0]: -

 Enter value at Spa[2][1]: -

 Enter value at Spa[2][2]: C

 Enter value at Spa[2][3]: -

 Enter value at Spa[3][0]: -

 Enter value at Spa[3][1]: D

 Enter value at Spa[3][2]: -

 Enter value at Spa[3][3]: -

         Sparse Matrix:
          A  -  -  -
          -  -  B  -
          -  -  C  -
          -  D  -  -
         Transpose of Sparse Matrix:
          A  -  -  -
          -  -  -  D
          -  B  C  -
          -  -  -  -
PS F:\Coding Practise\DS Algo Tution\DSA Class Codes> 
 */