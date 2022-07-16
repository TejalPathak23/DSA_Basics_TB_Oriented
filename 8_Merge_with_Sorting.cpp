//Program: To merge arrays together WITH SORTING
 
 #include<iostream>         //...Header Files
 using namespace std;

 int main()                 //...Main File         
 {
     int i,j,k;
     int sizeA, sizeB;

     int A[5] = {1, 3, 5, 7, 9};    //...Arrays
     int B[5] = {2, 4, 6, 8, 10};
     int C[10];
     
     sizeA = sizeB = 5;
     i = j = k = 0;

     while(i < sizeA && j < sizeB)  //...To copy Array A and B into C
     {
         if(A[i] < B[j])
         {
             C[k] = A[i];
             i++;
             k++;
         }
         else
         {
             C[k] = B[j];
             j++;
             k++;
         }
     }

     if(i < sizeA)          //...to copy remaing values from A[]
     {
         while(i < sizeA)
         {
             C[k] = A[i];
             i++;
             k++;
         }
     }  

     if(j < sizeB)      //...to copy remaing values from B[]
     {
         while(j < sizeB)
         {
             C[k] = B[j];
             j++;
             k++;
         }
     }

     cout<<"\n Array A[] = ";   //...display Array A[]
     for(i=0; i < sizeA; i++)
        cout<<"  "<<A[i];

     cout<<"\n Array B[] = ";   //...display Array B[]
     for(j=0; j < sizeB; j++)
        cout<<"  "<<B[j];

     cout<<"\n Array C[] = ";   //...display Array C[]
     for(i=0; i<k; i++)
        cout<<"  "<<C[i]; 

     return 0;
 }     

 /*----------------------------------------------------------------

Array A[] =   1  3  5  7  9
 Array B[] =   2  4  6  8  10
 Array C[] =   1  2  3  4  5  6  7  8  9  10

 */