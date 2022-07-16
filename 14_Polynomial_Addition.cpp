 #include<iostream>
 using namespace std;
 
 int main()
 {

     cout<<"\n .......... Polynomial Representation & Addition ...........\n";

     cout<<"\n .......... 1. Polynomial Representation using Array..............\n";

     // P1(x) = 4x^3 + 3x^2 + 2x + 7
     // P2(x) =        7x^2 + 4x + 10

     int Poly1[4], Poly2[4], Poly3[4];
     int i, terms = 4;

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
//2. Display Polynomials
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

//3. Polynomial Addition
cout<<"\n\n    Polynomial Addition: ";

    for(i=0; i<terms; i++)
    {
        Poly3[i] = Poly1[i] + Poly2[i];
    }
     for(i=terms-1; i >= 0; i--) 
     {
         cout<<Poly3[i]<<"x^"<<i<<" + ";
     }


 return 0 ;
 }

 /* -----------------------OUTPUT-------------------------------

 .......... Polynomial Representation & Addition ...........

 .......... 1. Polynomial Representation using Array..............

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


         Polynomial-01 : 4x^3 + 3x^2 + 2x^1 + 7x^0

         Polynomial-02 : 0x^3 + 7x^2 + 4x^1 + 10x^0

    Polynomial Addition: 4x^3 + 10x^2 + 6x^1 + 17x^0
 */