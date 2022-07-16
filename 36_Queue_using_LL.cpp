
//Program : Queue using Linked List

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *prev;
    struct node *next;
} * Head, *Front, *Rear;

void create_LinkedQue()
{
    int i, size;
    struct node *newnode;

    cout << "\n\t How many values to store in Queue.? : ";
    cin >> size;

    i = 0;
    while (i < size)
    {
        //.....Allocate Memory for Linked
        newnode = new struct node;

        //.....Add data and initialise pointers
        cout << "\n\t Enter data for 0" << i + 1 << " node"
             << " : ";
        cin >> newnode->data;
        newnode->prev = NULL;
        newnode->next = NULL;

        //......insert newnode in Linked Queue
        if (Head == NULL)
        {
            Head = newnode;
            Front = Rear = Head;
        }
        else
        {
            Rear->next = newnode; //insert on Rear end of Queue
            newnode->prev = Rear;
            Rear = newnode;
        }

        i++;
    }
}

void display_LinkedQue()
{
    struct node *p;

    cout << "\n\n Queue : Front";
    p = Front;
    while (p != NULL)
    {
        cout << "--->| " << p->data << " |";
        p = p->next;
    }
    cout<<"<---Rear";
}

void delete_LinkedQue()
{
    struct node *p;

    p = Front;           //....Set P on Front
    Front = Front->next; //....Shift Front on next node
    p->next = NULL;      //....break next link
    Front->prev = NULL;  //....break prev link
    Head = Front;        //....Shift Head on Front
    cout<<"\n\t Deleted : "<<p->data;
    delete p;            //....delete node from Front End
}

int main()
{

    cout << "\n\n .........Program : Queue using Linked List.........";

    Head = Front = Rear = NULL;

    cout<<"\n\n ......A. Insert in Queue......";

    create_LinkedQue();

    cout<<"\n\n ......B. Display Queue......";
    display_LinkedQue();

    cout<<"\n\n ......C. Delete a node from Queue......";
    delete_LinkedQue();
    display_LinkedQue();

    delete_LinkedQue();
    display_LinkedQue();

    return 0;
}

/*  
.........Program : Queue using Linked List.........

 ......A. Insert in Queue......
         How many values to store in Queue.? : 5

         Enter data for 01 node : 11

         Enter data for 02 node : 12

         Enter data for 03 node : 13

         Enter data for 04 node : 14

         Enter data for 05 node : 15


 ......B. Display Queue......

 Queue : Front--->| 11 |--->| 12 |--->| 13 |--->| 14 |--->| 15 |<---Rear

 ......C. Delete a node from Queue......
         Deleted : 11

 Queue : Front--->| 12 |--->| 13 |--->| 14 |--->| 15 |<---Rear  
         Deleted : 12

 Queue : Front--->| 13 |--->| 14 |--->| 15 |<---Rear
 
PS F:\Coding Practise\DS Algo Tution\DSA Class Codes> 
*/