
//Program : Double Ended Queue

#include <iostream>
using namespace std;

char Queue[10];
int size = 10;
int front, rear;

void insert_AtRear(char val)
{
    rear++;
    Queue[rear] = val;
}

delete_AtRear()
{
    cout << "\n\t Deleted: " << Queue[rear];
    rear--;
}

delete_AtFront()
{
    front++;
    cout << "\n\t Deleted: " << Queue[front];
}

insert_AtFront(char val)
{
    Queue[front] = val;
    front--;
}

void show_DEQueue()
{
    int i;
    cout << "\n\n Queue:  ";
    i = front + 1;
    while (i <= rear)
    {
        cout << "| " << Queue[i] << " |";
        i++;
    }
}

int main()
{
    int choice;
    char val, ans;
    front == rear == -1;

    do
    {

        cout << "\n\n .........Program : Double Ended Queue.........\n\n";

        cout << "\n **- Menu -**";
        cout << "\n 1. Insert at Rear";
        cout << "\n 2. Delete from Rear";
        cout << "\n 3. Delete from Front";
        cout << "\n 4. Insert at Front";
        cout << "\n 5. Display Queue";

        cout << "\n\n\t Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\n\t Enter value to insert: ";
            cin >> val;
            insert_AtRear(val);
            break;
        case 2:
            delete_AtRear();
            break;
        case 3:
            delete_AtFront();
            break;
        case 4:
            cout << "\n\t Enter value to insert: ";
            cin >> val;
            insert_AtFront(val);
            break;
        case 5:
            show_DEQueue();
            break;

        default:
            cout << "\n\n ....Invalid Choice.....";
            break;
        }
        cout << "\n\n Do U wanna continue..?(y/n) : ";
        cin >> ans;
    } while (ans == 'Y' || ans == 'y');

    return 0;
}

/*   

.........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 5


 Queue:

 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 1

         Enter value to insert: S


 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 1

         Enter value to insert: A


 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 1

         Enter value to insert: M


 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 5


 Queue:  | S || A || M |

 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 2

         Deleted: M

 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 5


 Queue:  | S || A |

 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 1

         Enter value to insert: M


 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 1

         Enter value to insert: A


 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 1

         Enter value to insert: D


 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 5


 Queue:  | S || A || M || A || D |

 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 3

         Deleted: S

 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 5


 Queue:  | A || M || A || D |

 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 3

         Deleted: A

 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 3

         Deleted: M

 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 5


 Queue:  | A || D |

 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 4

         Enter value to insert: D


 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 5


 Queue:  | D || A || D |

 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 4

         Enter value to insert: X


 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 5


 Queue:  | X || D || A || D |

 Do U wanna continue..?(y/n) : Y


 .........Program : Double Ended Queue.........


 **- Menu -**
 1. Insert at Rear
 2. Delete from Rear
 3. Delete from Front
 4. Insert at Front
 5. Display Queue

         Enter your choice: 6


 ....Invalid Choice.....

 Do U wanna continue..?(y/n) : N
PS F:\Coding Practise\DS Algo Tution\DSA Class Codes> 

*/