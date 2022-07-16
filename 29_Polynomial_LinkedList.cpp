// PROGRAM  : To Represent Polynomial using Linked List

#include <iostream>
using namespace std;

struct node
{
    int expo;
    int coeff;
    struct node *prev;
    struct node *next;
} * Head;

void create_Poly()
{
    int i, expo, coeff, Terms;
    struct node *newnode, *p;

    Head = NULL;

    cout << "\n\t Enter size of Polynomial(Terms)= ";
    cin >> Terms;

    for (i = 0; i < Terms; i++)
    {
        cout << "\n For Term " << i + 1;
        cout << "\n\t Enter Exponent: ";
        cin >> expo;
        cout << "\n\t Enter Coefficient: ";
        cin >> coeff;

        //...Allocate Memorey for Newnode
        newnode = new struct node;

        //...Store expo and coeff into memory
        newnode->expo = expo;
        newnode->coeff = coeff;
        newnode->prev = NULL;
        newnode->next = NULL;

        //...Attach newnode to DLL
        if (Head == NULL)
        {
            Head = newnode;
            p = Head;
        }
        else
        {
            p->next = newnode;
            newnode->prev = p;

            p = newnode;
        }
    }
}


void display_Poly()
{
    struct node *p;

    p = Head;
    cout<<"\n\n Head--->";
    while(p != NULL)
    {
        cout<<"<--|"<<p->expo<<"|"<<p->coeff<<"|-->";  
        p = p->next;
    }
    cout<<"--->NULL";
    
}

int main()
{
    cout << "\n\n....Polynimial Representation using Linked List....\n\n";
    
    create_Poly();

    cout<<"\n Polynomial : 8x^3 + 4x^2 + 2x + 1";
    display_Poly();
    

    return 0;
}

/*   

....Polynimial Representation using Linked List....


         Enter size of Polynomial(Terms)= 4

 For Term 1
         Enter Exponent: 3

         Enter Coefficient: 8

 For Term 2
         Enter Exponent: 2

         Enter Coefficient: 4

 For Term 3
         Enter Exponent: 1

         Enter Coefficient: 2

 For Term 4
         Enter Exponent: 0

         Enter Coefficient: 1

 Polynomial : 8x^3 + 4x^2 + 2x + 1

 Head---><--|3|8|--><--|2|4|--><--|1|2|--><--|0|1|-->NULL

*/