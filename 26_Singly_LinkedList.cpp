/*
Program : for Singly Linked List
    a) Create Singly Linked List
    b) Display Singly Linked List
    c) Insert node in Singly Linked List
    d) Delete node from Singly Linked List
 */

#include <iostream>
using namespace std;

struct node
{
    char data;
    struct node *next;
} * Head;

void create_SLL() //...To Create Singly Linked List
{
    struct node *p, *newnode;

    //.....Step 1: Allocate memory
    newnode = new struct node;

    //.....Step 2: add data and address in memory
    cout << "\n\t Enter a character: ";
    cin >> newnode->data;
    newnode->next = NULL;

    //.....Step 3: Attach new node in SLL
    if (Head == NULL)
    {
        Head = newnode;
        p = Head;
    }
    else
    {
        p->next = newnode;
        p = newnode;
    }
}

void dipslay_SLL()
{
     struct node *p;

     p = Head;
     cout<<"\n\n Head";
     while(p != NULL)
     {
         cout<<"--->|"<<p->data<<"|";  
         p = p->next;   
     }
     cout<<"--->NULL";
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
    while(p->next != NULL)  
    {
        p = p->next;
    }

    p->next = newnode;
}

void delete_node()
{
    struct node *p, *q;
    char key;  

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

    cout << "\n\n Program : for Singly Linked List";
    cout << "\n\n a) Create Singly Linked List";
    Head = NULL;
    create_SLL();
    create_SLL();
    create_SLL();

    cout << "\n\n b) Display Singly Linked List";
    dipslay_SLL();

    cout << "\n\n c) Insert node in Singly Linked List";
    insert_node();
    dipslay_SLL();
    insert_node();
    dipslay_SLL();

    cout << "\n\n d) Delete node from Singly Linked List";
    delete_node();
    dipslay_SLL();
    delete_node();
    dipslay_SLL();

    return 0;
}

/*   

Program : for Singly Linked List

 a) Create Singly Linked List
         Enter a character: M

         Enter a character: A

         Enter a character: D


 b) Display Singly Linked List

 Head--->|M|--->|A|--->|D|--->NULL

 c) Insert node in Singly Linked List
         Enter a character: A


 Head--->|M|--->|A|--->|D|--->|A|--->NULL
         Enter a character: M


 Head--->|M|--->|A|--->|D|--->|A|--->|M|--->NULL

 d) Delete node from Singly Linked List
         Enter the key to delete: M


 Head--->|A|--->|D|--->|A|--->|M|--->NULL
         Enter the key to delete: D


 Head--->|A|--->|A|--->|M|--->NULL

*/