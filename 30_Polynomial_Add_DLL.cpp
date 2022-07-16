//Program: Addition of Polynomials using DLL

#include <iostream>
using namespace std;

struct node
{
    int expo;
    int coeff;
    struct node *prev;
    struct node *next;
} * Head1, *Head2;

struct node *create_Poly()
{
    int i, expo, coeff, Terms;
    struct node *newnode, *p, *Head;

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
    return Head;
}

void display_Poly(struct node *Head)
{
    struct node *p;

    p = Head;
    cout << "\n Head--->";
    while (p != NULL)
    {
        cout << "<--|" << p->expo << "|" << p->coeff << "|-->";
        p = p->next;
    }
    cout << "--->NULL";
}

void add_Poly()
{
    struct node *p, *q;

    p = Head1;
    q = Head2;

    while (p != NULL || q != NULL)
    {
        if (p->expo == q->expo)
        {
            p->coeff = p->coeff + q->coeff;
        }
        p = p->next;
        q = q->next;
    }
}

int main()
{
    cout << "\n\t ....Program: Addition of Polynomials using DLL....";

    cout << "\n\t For first Polynomial: ";
    Head1 = create_Poly();

    cout << "\n\t For Second Polynomial: ";
    Head2 = create_Poly();

    cout << "\n\n\t First Polynomial: ";
    display_Poly(Head1);

    cout << "\n\n\t Second Polynomial: ";
    display_Poly(Head2);

    cout << "\n\n\t Addition of Polynomials: ";
    add_Poly();
    display_Poly(Head1);    // Head1 stores add_Poly

    cout<<"\n\n";

    return 0;
}


/*    
....Program: Addition of Polynomials using DLL....

         For first Polynomial:
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

         For Second Polynomial:
         Enter size of Polynomial(Terms)= 4

 For Term 1
         Enter Exponent: 3

         Enter Coefficient: 0

 For Term 2
         Enter Exponent: 2

         Enter Coefficient: 5

 For Term 3
         Enter Exponent: 1

         Enter Coefficient: 3

 For Term 4
         Enter Exponent: 0

         Enter Coefficient: 7


         First Polynomial:
 Head---><--|3|8|--><--|2|4|--><--|1|2|--><--|0|1|-->--->NULL  

         Second Polynomial:
 Head---><--|3|0|--><--|2|5|--><--|1|3|--><--|0|7|-->--->NULL

         Addition of Polynomials:
 Head---><--|3|8|--><--|2|9|--><--|1|5|--><--|0|8|-->--->NULL  

*/
