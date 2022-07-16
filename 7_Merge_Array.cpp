 //Program: To merge arrays together WITHOUT SORTING
 
 #include<iostream>
 using namespace std;
 int main()
 {
     int i,j,k;

     char A[5] = {'W', 'E', 'L','\0'};
     char B[5] = {'C', 'O', 'M', 'E','\0'};
     char C[10];

     i = j = k = 0;
     while(A[i] != '\0')
     {
         C[k] = A[i];
         i++;
         k++;
     }

     while(B[j] != '\0')
     {
         C[k] = B[j];
         j++;
         k++;
     }

     cout<<"\n Array A[] = ";
     for(i=0; A[i] != '\0'; i++)
        cout<<"  "<<A[i];

     cout<<"\n Array B[] = ";
     for(j=0; B[j] != '\0'; j++)
        cout<<"  "<<B[j];

     cout<<"\n Array C[] = ";
     for(i=0; i<k; i++)
        cout<<"  "<<C[i];    


 return 0 ;
 }

/*-----------------OUTPUT------------------------------------------------

 Array A[] =   W  E  L
 Array B[] =   C  O  M  E
 Array C[] =   W  E  L  C  O  M  E
  
*/ 