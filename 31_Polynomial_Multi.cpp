//Program: Multiplication of Polynomials using DLL

#include <iostream>
using namespace std;

struct node
{
    int expo;
    int coeff;
    struct node *prev;
    struct node *next;
} * Head1, *Head2, *Head3, *Head4;

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

void Multi_Poly()
{
    struct node *newnode, *p, *q, *r, *temp;

    Head3 = NULL;

    p = Head1;
    q = Head2;
    r = Head3;

    while (p->next != NULL)
        p = p->next;

    while (q->next != NULL)
        q = q->next;

    while (q != NULL) // Poly-2
    {
        while (p != NULL) // Poly-1
        {
            //...Allocate Memorey for Newnode
            newnode = new struct node;

            //...Store expo and coeff into memory
            newnode->expo = p->expo + q->expo;
            newnode->coeff = p->coeff * q->coeff;
            newnode->prev = NULL;
            newnode->next = NULL;

            //...Attach newnode to DLL
            if (Head3 == NULL)
            {
                Head3 = newnode;
                temp = Head3;
            }
            else
            {
                temp->prev = newnode;
                newnode->next = temp;

                temp = newnode;
                Head3 = newnode;
            }

            p = p->prev;
        }

        p = Head1;
        while (p->next != NULL)
            p = p->next;

        q = q->prev;
    }

    Head4 = NULL;
    

    int key, expo, coeff;
    

    key = 6;

    while (key >= 0)
    {
        p = Head3;
        expo = coeff = 0;
        while (p != NULL)
        {

            if (p->expo == key)
            {
                expo = key;
                coeff = coeff + p->coeff;
            }
            p = p->next;
        }
        //node create
         //...Allocate Memorey for Newnode
            newnode = new struct node;

            //...Store expo and coeff into memory
            newnode->expo = expo;
            newnode->coeff = coeff;
            newnode->prev = NULL;
            newnode->next = NULL;

            //...Attach newnode to DLL
            if (Head4 == NULL)
            {
                Head4 = newnode;
                temp = Head4;
            }
            else
            {
                temp->next = newnode;
                newnode->prev = temp;

                temp = newnode;
            }
        key--;
    }
}

/*   
First Polynomial:
 Head---><--|3|8|--><--|2|4|--><--|1|2|--><--|0|1|-->--->NULL  

         Second Polynomial:
 Head---><--|3|0|--><--|2|5|--><--|1|3|--><--|0|7|-->--->NULL
*/

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

    cout << "\n\n\t Multiplication of Polynomials: ";
    Multi_Poly();
    display_Poly(Head3); // Head3 stores multi_Poly

    cout<<"\n Final Multiplication of Polynomials"
    display_Poly(Head4);

    cout << "\n\n";

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

         Multiplication of Polynomials:
 Head---><--|6|0|--><--|5|0|--><--|4|0|--><--|3|0|--><--|5|40|--><--|4|20|--><--|3|10|--><--|2|5|--><--|4|24|--><--|3|12|--><--|2|6|--><--|1|3|--><--|3|56|--><--|2|28|--><--|1|14|--><--|0|7|-->--->NULL

  Final Multiplication of Polynomials
 Head---><--|6|0|--><--|5|40|--><--|4|44|--><--|3|78|--><--|2|39|--><--|1|17|--><--|0|7|-->--->NULL
*/