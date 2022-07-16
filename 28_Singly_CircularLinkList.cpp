/*
Program: Singly Circular Linked List
*/

#include <iostream>
using namespace std;

struct node
{
    char data;
    struct node *next;
} * Head;

void create_SCLL() //...To Create Singly Circular Linked List
{
    struct node *p, *newnode;

    //.....Step 1: Allocate memory
    newnode = new struct node;

    //.....Step 2: add data and address in memory
    cout << "\n\t Enter a character: ";
    cin >> newnode->data;
    newnode->next = NULL;

    //.....Step 3: Attach new node in SCLL
    if (Head == NULL)
    {
        Head = newnode;
        newnode->next = Head;   //....SLL -> SCLL
        p = Head;
    }
    else
    {
        p->next = newnode;
        newnode->next = Head;   //....SLL -> SCLL
        p = newnode;
    }
}

void dipslay_SCLL()
{
     struct node *p;

     p = Head;
     cout<<"\n\n Head";
     do
     {
        cout<<"--->|"<<p->data<<"|";  
        p = p->next;   
     }while(p != Head);
     cout<<"--->Head";
}

void insert_node()
{
    struct node *p, *newnode;

    //.....Step 1: Allocate memory
    newnode = new struct node;

    //.....Step 2: add data and address in memory
    cout << "\n\t Enter a character: ";
    cin >> newnode->data;
    newnode->next = NULL;

    //.....Step 3: Attach new node in SLL
    p = Head;
    while(p->next != Head)  
    {
        p = p->next;
    }

    p->next = newnode;
    newnode->next = Head;
}

void delete_node()
{
    struct node *p, *q,*Last;
    char key;  

    p = Head;       //......To find last node
    while(p->next != Head) 
    {
        p = p->next;
    }

    Last = p;

    cout<<"\n\t Enter the key to delete: ";
    cin>>key; 

    p = Head; 
    while(p->data != key)
    {   
       q = p; 
       p = p->next; 
    }

    if(p == Head) 
    {
        Head = Head->next;
        Last->next = Head;
        delete p; 
    }
    else
    {
        q->next = p->next;   
        delete p; 
    }

}



int main()
{

    cout << "\n\n Program : for Singly Circular Linked List";

    cout << "\n\n a) Create Singly Circular Linked List";
    Head = NULL;
    create_SCLL();
    create_SCLL();
    create_SCLL();

    cout << "\n\n b) Display Singly Circular Linked List";
    dipslay_SCLL();

    cout << "\n\n c) Insert node in Singly Circular Linked List";
    insert_node();
    dipslay_SCLL();
    insert_node();
    dipslay_SCLL();

    cout << "\n\n d) Delete node from Singly Circular Linked List";
    delete_node();
    dipslay_SCLL();
    delete_node();
    dipslay_SCLL();

    return 0;

}    

/*----------------------------------------------------------------

Program : for Singly Circular Linked List

 a) Create Singly Circular Linked List
         Enter a character: C

         Enter a character: A

         Enter a character: T


 b) Display Singly Circular Linked List

 Head--->|C|--->|A|--->|T|--->Head

 c) Insert node in Singly Circular Linked List
         Enter a character: M


 Head--->|C|--->|A|--->|T|--->|M|--->Head
         Enter a character: D


 Head--->|C|--->|A|--->|T|--->|M|--->|D|--->Head

 d) Delete node from Singly Circular Linked List
         Enter the key to delete: M


 Head--->|C|--->|A|--->|T|--->|D|--->Head
         Enter the key to delete: C


 Head--->|A|--->|T|--->|D|--->Head

*/
