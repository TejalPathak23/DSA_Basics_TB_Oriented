
//Program: Circular Queue

#include <iostream>
using namespace std;

char que[5];
int size = 5;
int front, rear;

int que_empty()
{
    if (front == rear)
        return 1;
    else
        return 0;
}

int que_full()
{
    if ((rear == size-1 && front == 0) || (rear == front-1)) //rear follows front in queue full
        return 1;
    else
        return 0;
}

void insert_que(char ch)
{
    //if (!que_full())
    //{
        rear = (rear + 1) % size;
        que[rear] = ch;
        cout << "\n Insert: " << ch;
    //}
    // else
    // {
    //     cout << "\n\t Queue is full....!!!";
    // }
}

void display_que()
{
    int i;
    cout << "\n Queue: ";
    for (i = 0; i <= size; i++)
    {
        cout << " " << que[i];
    }
}

void delete_que()
{
    if(! que_empty())
    {
    front = (front + 1) % size;
    cout<<"\n Deleted: "<<que[front];
    }
    else
    {
        cout << "\n\t Queue is empty....!!!";
    }
}

int main()
{
    cout << "\n\n ........Program: Circular Queue........";
    front = -1;
    rear = -1;

    insert_que('A');
    display_que();
    insert_que('B');
    display_que();
    insert_que('C');
    display_que();
    insert_que('D');
    display_que();
    insert_que('E');
    display_que();
    
    delete_que();
    display_que();
    delete_que();
    display_que();

    insert_que('X');
    display_que();
    insert_que('Y');
    display_que();

    return 0;
}

/*      ----------------------------------------------------------------
........Program: Circular Queue........
 Insert: A
 Queue:  A
 Insert: B
 Queue:  A B    
 Insert: C
 Queue:  A B C   
 Insert: D
 Queue:  A B C D  
 Insert: E
 Queue:  A B C D E 
 Deleted: A
 Queue:  A B C D E 
 Deleted: B
 Queue:  A B C D E
 Insert: X
 Queue:  X B C D E 
 Insert: Y
 Queue:  X Y C D E 
PS F:\Coding Practise\DS Algo Tution\DSA Class Codes> 
 */