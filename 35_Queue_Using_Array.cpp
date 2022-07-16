
//Program : Queue using Array

#include <iostream>
using namespace std;

char Queue[5];
int size = 5;
int front, rear;

void init_que()
{
    front = rear = -1;
}

int que_empty()
{
    if (front == rear)
        return 1;
    else
        return 0;
}

int que_full()
{
    if (rear == size - 1)
        return 1;
    else
        return 0;
}

void insert_que(char val)
{
    if (!que_full())
    {
        rear++;
        Queue[rear] = val;
        cout << "\n\n\t Inserted : " << Queue[rear];
    }
    else
    {
        cout << "\n\n\t Queue full, Overflow...!!!";
    }
}

void display_que()
{
    int i;
    i = front + 1;
    cout<<"\n\n\t Queue: ";
    while (i <= rear)
    {
        cout << "| " << Queue[i]<<" |";
        i++;
    }
}

void delete_que()
{
    if (!que_empty())
    {
        front++;
        cout << "\n\n\t Deleted : " << Queue[front];
    }
    else
    {
        cout << "\n\n\t Queue empty, Underflow...!!!";
    }
}

int main()
{

    cout << "\n\n\t .....Queue using Array.....";

    cout << "\n\n\t .....A. Initialise Queue.....";
    init_que();

    cout << "\n\n\t .....B. Insert in Queue.....";
    insert_que('M');
    display_que();
    insert_que('A');
    display_que();
    insert_que('D');
    display_que();
    insert_que('A');
    display_que();
    insert_que('M');
    display_que();
    insert_que('X');

    cout << "\n\t .....C. Display Queue.....";
    display_que();

    cout << "\n\t .....D. Delete from Queue.....";
    delete_que();
    display_que();
    delete_que();
    display_que();
    delete_que();
    display_que();
    delete_que();
    display_que();
    delete_que();
    display_que();
    delete_que();
    display_que();

    return 0;
}

/*   
 .....Queue using Array.....

         .....A. Initialise Queue.....

         .....B. Insert in Queue.....

         Inserted : M

         Queue: | M |

         Inserted : A

         Queue: | M || A |

         Inserted : D

         Queue: | M || A || D |

         Inserted : A

         Queue: | M || A || D || A |

         Inserted : M

         Queue: | M || A || D || A || M |

         Queue full, Overflow...!!!
         .....C. Display Queue.....

         Queue: | M || A || D || A || M |
         .....D. Delete from Queue.....

         Deleted : M

         Queue: | A || D || A || M |

         Deleted : A

         Queue: | D || A || M |

         Deleted : D

         Queue: | A || M |

         Deleted : A

         Queue: | M |

         Deleted : M

         Queue:

         Queue empty, Underflow...!!!

         Queue:
PS F:\Coding Practise\DS Algo Tution\DSA Class Codes> 
*/