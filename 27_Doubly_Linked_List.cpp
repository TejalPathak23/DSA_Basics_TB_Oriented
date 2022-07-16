/*
Program : for Doubly Linked List
    a) Create Doubly Linked List
    b) Display Doubly Linked List
    c) Insert node in Doubly Linked List
    d) Delete node from Doubly Linked List
 */

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} * Head;

void create_DLL()
{
    struct node *p, *newnode;

    newnode = new struct node;

    cout << "\n\t Enter a number: ";
    cin >> newnode->data;
    newnode->prev = NULL;
    newnode->next = NULL;

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

void display_DLL()
{
    struct node *p;

    p = Head;
    cout<<"\n\n\t Head";
    while (p)
    {
        cout << "--><--" << p->data;
        p = p->next;
    }
    cout << "-->NULL";
}

void insert_DLL()
{
    struct node *p, *newnode;

    newnode = new struct node;

    cout << "\n\t Enter a number: ";
    cin >> newnode->data;
    newnode->prev = NULL;
    newnode->next = NULL;

    p = Head;
    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = newnode;
    newnode->prev = p;
}

void delete_DLL()
{
    struct node *p;
    int key;

    cout << "\n\t Enter Key to delete: ";
    cin >> key;

    p = Head; //....To find node to be deleted
    while (p->data != key)
        p = p->next;

    if (p == NULL)
        cout << "\n Not Found...!!!";
    else
    {
        if (p == Head) //....if node to be deleted is Head
        {
            Head = Head->next;
            Head->prev = NULL;
            cout << "\n Key Found & deleted...!!!";
        }
        else //....if node to be deleted is not Head
        {
            p->next->prev = p->prev;
            p->prev->next = p->next;
            cout << "\n Key Found & deleted...!!!";
        }
        delete p;
    }
}

int main()
{
    cout << "\n\n Program : for Doubly Linked List";
    cout << "\n\n a) Create Doubly Linked List";
    Head = NULL;
    create_DLL();
    create_DLL();
    create_DLL();

    cout << "\n\n b) Display Doubly Linked List";
    display_DLL();

    cout << "\n\n c) Insert node in Doubly Linked List";
    insert_DLL();
    display_DLL();
    insert_DLL();
    display_DLL();

    cout << "\n\n d) Delete node from Doubly Linked List";
    delete_DLL();
    display_DLL();
    delete_DLL();
    display_DLL();

    return 0;
}

/*   

Program : for Doubly Linked List

 a) Create Doubly Linked List
         Enter a number: 10

         Enter a number: 20

         Enter a number: 30


 b) Display Doubly Linked List

         Head--><--10--><--20--><--30-->NULL

 c) Insert node in Doubly Linked List
         Enter a number: 40


         Head--><--10--><--20--><--30--><--40-->NULL
         Enter a number: 50


         Head--><--10--><--20--><--30--><--40--><--50-->NULL   

 d) Delete node from Doubly Linked List
         Enter Key to delete: 10

 Key Found & deleted...!!!

         Head--><--20--><--30--><--40--><--50-->NULL
         Enter Key to delete: 40

 Key Found & deleted...!!!

         Head--><--20--><--30--><--50-->NULL

*/