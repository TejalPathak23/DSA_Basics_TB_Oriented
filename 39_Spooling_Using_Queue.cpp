
//Program : Spooling using Queue

#include <iostream>
using namespace std;

struct Queue
{
    char job[10];   //......Member Variable

} Que[10];      //....Object Array of 10 objects

int front;
int rear;


int main()
{
    cout << "\n\n ........Program : Spooling using Queue........";

    int i, jobs;

    front = rear = -1;

    cout << "\n\n How many jobs to process : ";
    cin >> jobs;

    for (i = 0; i < jobs; i++)      //....Insert jobs in queue
    {
        rear++;
        cout << "\n\t Enter Job-" << i + 1 << " :";
        cin >>Que[rear].job;
    }

    cout<<"\n\n Job Queue: ";       //......Display Job Queue
    for(i = front+1; i <= rear; i++)
    {
        cout<<"| "<<Que[i].job<<" |";
    }
    

    cout<<"\n\n Processing Jobs on Printer.....";
     
    while(front < rear)
    {
        front++;
        cout<<"\n\t Processing..."<<Que[front].job;
    }

    return 0;
}

/*   
........Program : Spooling using Queue........

 How many jobs to process : 3

         Enter Job-1 :Doc-1

         Enter Job-2 :Doc-2

         Enter Job-3 :Doc-3


 Job Queue: | Doc-1 || Doc-2 || Doc-3 |

 Processing Jobs on Printer.....
         Processing...Doc-1
         Processing...Doc-2
         Processing...Doc-3
         
PS F:\Coding Practise\DS Algo Tution\DSA Class Codes>
*/