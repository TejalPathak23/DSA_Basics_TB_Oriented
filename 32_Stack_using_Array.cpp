//Program : Stack Representation using Array

 #include<iostream>
 using namespace std;
 
 char stk[7];
 int size = 7;
 int top;

 int stk_empty()
 {
     if(top == -1)
       return 1;
     else
       return 0;  
 }

 int stk_full()
 {
     if(top == size-1)
        return 1;
     else
        return 0;   
 }

 void push(char val)
 {
     if(! stk_full())
     {
         top++;
         stk[top] = val;
     }
     else
     {
         cout<<"\n\t Stack is Full....!!!";
     }
 }

 char pop()
 {
     if(! stk_empty())
     {
         char val;
         val = stk[top];
         top--;
         return val;
     }
     else
     {
         cout<<"\n\t Stack is Empty....!!!";
     }
 }

 void display()
 {
     cout<<"\n Stack: ";
     int i;
     for(i=0; i<=top; i++)
        cout<<stk[i]<<", ";
 }



 int main()
 {
     cout<<"\n\t ....Program : Stack Representation using Array....";

     top = -1;  //...Initially top = -1;

     int i, count;
     char ch;

    cout<<"\n\n\t 1. Push in Stack\n\n";
    push('W');
    display();
    push('E');
    display();
    push('L');
    display();
    push('C');
    display();
    push('O');
    display();
    push('M');
    display();
    push('E');
    display();
    push('N');
    display();

    cout<<"\n\n\t 2. Pop from Stack\n\n";
    cout<<"\n Deleted: "<<pop();
    display();
    cout<<"\n Deleted: "<<pop();
    display();
    cout<<"\n Deleted: "<<pop();
    display();
    cout<<"\n Deleted: "<<pop();
    display();
    cout<<"\n Deleted: "<<pop();
    display();
    cout<<"\n Deleted: "<<pop();
    display();
    cout<<"\n Deleted: "<<pop();
    display();
    cout<<"\n Deleted: "<<pop();
    display();


 return 0 ;
 }

 /*   
 ....Program : Stack Representation using Array....

         1. Push in Stack


 Stack: W,
 Stack: W, E,
 Stack: W, E, L,
 Stack: W, E, L, C,
 Stack: W, E, L, C, O,
 Stack: W, E, L, C, O, M,
 Stack: W, E, L, C, O, M, E,
         Stack is Full....!!!

    2. Pop from Stack

 Stack: W, E, L, C, O, M, E, 
 Deleted: E
 Stack: W, E, L, C, O, M,
 Deleted: M
 Stack: W, E, L, C, O,
 Deleted: O
 Stack: W, E, L, C,
 Deleted: C
 Stack: W, E, L,
 Deleted: L
 Stack: W, E,
 Deleted: E
 Stack: W,
 Deleted: W
 Stack:
 Deleted:
         Stack is Empty....!!!
 */