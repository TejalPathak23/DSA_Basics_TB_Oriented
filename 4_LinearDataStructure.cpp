//Program: ....\n Array Values Arranged Sequentially in Memory \n....

 #include<iostream>
 using namespace std;
 int main()
 {
    int a[5] = {10, 20, 30, 40, 50};
    
    cout<<"....\n Array Values Arranged Sequentially in Memory \n....";

    cout<<"\n\t Value \t Address\n";

    cout<<"\t"<<a[0]<<"\t"<<&a[0]<<endl;
    cout<<"\t"<<a[1]<<"\t"<<&a[1]<<endl;
    cout<<"\t"<<a[1]<<"\t"<<&a[1]<<endl;
    cout<<"\t"<<a[2]<<"\t"<<&a[2]<<endl;
    cout<<"\t"<<a[3]<<"\t"<<&a[3]<<endl;
    cout<<"\t"<<a[4]<<"\t"<<&a[4]<<endl;

 return 0 ;
 }

 /****************************************************************
    
  ....
 Array Values Arranged Sequentially in Memory
....
         Value   Address
        10      0x7bfe00
        20      0x7bfe04
        30      0x7bfe08
        40      0x7bfe0c
        50      0x7bfe10

PS F:\Coding Practise\DS Algo Tution\DSA Class Codes> 
  */ 