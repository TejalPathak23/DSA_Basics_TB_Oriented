 #include<iostream>
 using namespace std;
 
 int main()
 {
     cout<<"\n .......... Polynomial Multiplication ...........\n";

     // P1(x) = 4x^3 + 3x^2 + 2x + 7
     // P2(x) =        7x^2 + 4x + 10

     int Poly1[4], Poly2[4], Res[8];
     int i, j, k, terms = 4;

// 1. Polynomial Representation

     cout<<"\n\t For Polynomial- 01 ";
     for(i=0; i<terms; i++) 
     {
         cout<<"\n\t Enter Coefficient of X^"<<i<<" : ";
         cin>>Poly1[i];
     }

    cout<<"\n\t For Polynomial- 02 ";
     for(i=0; i<terms; i++) 
     {
         cout<<"\n\t Enter Coefficient of X^"<<i<<" : ";
         cin>>Poly2[i];
     }

     for(i=0; i<terms*2; i++) 
     {
         Res[i] = 0;
     }
     
// 2. Polynomial Multiplication     
    int loc, multi;

     for(i=0; i<terms; i++)     //Poly-2
     {
         loc = multi = 0;
         for(j=0; j<terms; j++) //Poly-1
         {
            loc = i + j;      //...Location of Resultant array to store multiplication
            multi = Poly2[i] * Poly1[j]; //...Multiplication of terms in Poly-1,2

            if(Res[loc] == 0)   //...check whether location is empty
                Res[loc] = multi; //...if empty
            else 
                Res[loc] = Res[loc] + multi; //...if has value

            loc = multi = 0;    
         }

     }
   
// 2. Display Polynomials
     cout<<"\n\n\t Polynomial-01 : ";
     for(i=terms-1; i >= 0; i--) 
     {
         cout<<Poly1[i]<<"x^"<<i<<" + ";
     }

     cout<<"\n\n\t Polynomial-02 : ";
     for(i=terms-1; i >= 0; i--) 
     {
         cout<<Poly2[i]<<"x^"<<i<<" + ";
     }

     cout<<"\n\n\t Polynomial Multiplication : ";
     for(i=terms*2-1; i >= 0; i--) 
     {
         if(Res[i] != 0)
            cout<<Res[i]<<"x^"<<i<<" + ";
     }

 return 0 ;
 }

 /*
------------Output-------------

.......... Polynomial Multiplication ...........

         For Polynomial- 01
         Enter Coefficient of X^0 : 7

         Enter Coefficient of X^1 : 2

         Enter Coefficient of X^2 : 3

         Enter Coefficient of X^3 : 4

         For Polynomial- 02
         Enter Coefficient of X^0 : 10

         Enter Coefficient of X^1 : 4

         Enter Coefficient of X^2 : 7

         Enter Coefficient of X^3 : 0


         Polynomial-01 : 4x^3 + 3x^2 + 2x^1 + 7x^0 +

         Polynomial-02 : 0x^3 + 7x^2 + 4x^1 + 10x^0 +

         Polynomial Multiplication : 28x^5 + 37x^4 + 66x^3 + 87x^2 + 48x^1 + 70x^0
 */