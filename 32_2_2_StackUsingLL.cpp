// Program : Stack using Linked List
#include <iostream>
using namespace std;
struct node
{
 int data;
 struct node *prev;
 struct node *next;
}*Head, *Top;
void Push_Stk()
{
 struct node *p, *newnode;

 //....1. Allocate Memory
 newnode = new struct node;

 //.... 2. Add data and initialise pointers
 cout<<"\n\n\t Enter a number to push in Stack : ";
 cin>>newnode->data;
 newnode->prev = NULL;
 newnode->next = NULL;

 //......3. Push newnode in Linked Stack
 if(Head == NULL)
 {
 Head = newnode;
 Top = newnode;
 }
 else
 {
 Top->next = newnode;
 newnode->prev = Top;

 Top = newnode;
 }
}

int Pop_Stk()
{
 struct node *ptr;
 int val = 0;

 if(Top != NULL)
 {
 val = Top->data;

 ptr = Top;
 Top = Top->prev;

 if(ptr != Head)
 {
 ptr->prev->next = NULL; //....link-1 broken
 ptr->prev = NULL; //....link-2 broken
 }
 
 delete ptr;

 }
 return val;
}
void display_Stk()
{
 struct node *p;

 cout<<"\n\n Stack : Head--->";
 p = Head;
 while(p)
 {
 cout<<"| "<<p->data<<" |--->";
 p = p->next;
 }
 cout<<"NULL";
}
int main()
{
 cout<<"......Program : Stack using Linked List......";

 int i, val;
 i = val = 0;

 Head = Top = NULL;
 
 Push_Stk();
 display_Stk();

 Push_Stk();
 display_Stk();

 Push_Stk();
 display_Stk();

 while(i < 4)
 {
 val = Pop_Stk();
 if(val == 0)
 cout<<"\n\t Stack is Empty...!!!";
 else
 cout<<"\n\t Deleted = "<<val;
 i++;
 display_Stk();
 }

 return 0;
}
/*
......Program : Stack using Linked List......
 Enter a number to push in Stack : 11
Stack : Head--->| 11 |--->NULL
 Enter a number to push in Stack : 22
Stack : Head--->| 11 |--->| 22 |--->NULL
 Enter a number to push in Stack : 33
Stack : Head--->| 11 |--->| 22 |--->| 33 |--->NULL
 Deleted = 33
Stack : Head--->| 11 |--->| 22 |--->NULL
 Deleted = 22
Stack : Head--->| 11 |--->NULL
 Deleted = 11
Stack : Head--->| -272787728 |--->NULL
 Stack is Empty...!!!
*/