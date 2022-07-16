 #include<iostream>
 using namespace std;
 
 int A[5];      //......Global variables
 int B[5];
 int C[10];
int i,j;

 void create_Ary()
 {
     for(int i=0; i<5; i++)
     {
         cout<<"\n Enter at A["<<i<<"] :";
         cin>>A[i];
     }

     for(int j=0; j<5; j++)
     {
         cout<<"\n Enter at B["<<j<<"] :";
         cin>>B[j];
     }
 }

void display_Ary()
{
    cout<<"\n\t Array A[5] : ";
    for(int i=0; i<5; i++)
     {
         cout<<"  "<<A[i];
     }

    cout<<"\n\t Array B[5] : ";
     for(int j=0; j<5; j++)
     {
         cout<<"  "<<B[j];
     }
}

void delete_Ary()
{
    int loc;
    cout<<"\n Enter the location to be deleted from A[]: ";
    cin>>loc;

    i = 0;
    while(i != loc)
        i++;

    for(j=i; j<5; j++)    
    {
        A[j] = A[j+1];
    }
    cout<<"\n\t Array A[5] : ";
    for(int i=0; i<5; i++)
     {
         cout<<"  "<<A[i];
     }

}

void insert_Ary()
{
    int loc,val;
    cout<<"\n Enter the location to be insert in A[]: ";
    cin>>loc;

    cout<<"\n Enter the value to be insert in A[]: ";
    cin>>val;

    if(A[loc] == 0)
    {
        A[loc] = val;
    }
    else
    {
        i = 0;
        while(i != loc)
            i++;

        for(j=i; j<5; j++)    
        {
            A[j] = A[j+1];
        } 
        A[loc] = val;
    }

    cout<<"\n\t Array A[5] : ";
    for(int i=0; i<5; i++)
     {
         cout<<"  "<<A[i];
     }

}


 int main()
 {
          
     create_Ary();
     display_Ary(); 
     delete_Ary();  
     insert_Ary();       

 return 0 ;
 }


 /*---------OUTPUT--------------------------------
 Enter at A[0] :1

 Enter at A[1] :3

 Enter at A[2] :5

 Enter at A[3] :7

 Enter at A[4] :9

 Enter at B[0] :2

 Enter at B[1] :4

 Enter at B[2] :6

 Enter at B[3] :8

 Enter at B[4] :10

         Array A[5] :   1  3  5  7  9
         Array B[5] :   2  4  6  8  10
 Enter the location to be deleted from A[]: 1

         Array A[5] :   1  5  7  9  0
 Enter the location to be insert in A[]: 4

 Enter the value to be insert in A[]: 11

         Array A[5] :   1  5  7  9  11

 */