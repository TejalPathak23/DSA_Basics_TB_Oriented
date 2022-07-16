/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int Ary1[5];
    char Ary2[5];
    float Ary3[5];
    
    Ary1[0] = 11;
    Ary1[1] = 12;
    Ary1[2] = 13;
    Ary1[3] = 14;
    Ary1[4] = 15;
    
    for(int i=0; i<5; i++)
    {
        cout<<"\n Enter a char: ";
        cin>>Ary2[i];
    }
    
    int j=0;
    while(j<5)
    {
        cout<<"\n Enter a float val: ";
        cin>>Ary3[j];
        j++;
    }
   
    cout<<"\n Integer Array: ";
    cout<<Ary1[0]<<" "<<Ary1[1]<<" "<<Ary1[2]<<" "<<Ary1[3]<<" "<<Ary1[4];
    
    cout<<"\n Chracter Array: ";
    for(int i=0; i<5; i++)
    {
        cout<<" "<<Ary2[i];
    }

    cout<<"\n Float Array: ";
    j=0;
    while(j<5)
    {
        cout<<" "<<Ary3[j];
        j++;
    }   
  
    return 0;
}


/*------------OUTPUT---------------------

Enter a char: M

 Enter a char: A

 Enter a char: D

 Enter a char: A

 Enter a char: M

 Enter a float val: 1.1

 Enter a float val: 1.2

 Enter a float val: 1.3

 Enter a float val: 1.4

 Enter a float val: 1.5

 Integer Array: 11 12 13 14 15
 Chracter Array:  M A D A M
 Float Array:  1.1 1.2 1.3 1.4 1.5

...Program finished with exit code 0
Press ENTER to exit console.

-------------------------------------------*/