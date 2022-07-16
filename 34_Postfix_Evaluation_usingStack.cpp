//Program: Postfix Evaluation using Stack

#include <iostream>
using namespace std;

int stk[10];
int top = -1;

void push(char ch)
{
    top++;
    stk[top] = ch;
}

char pop()
{
    char ch;
    ch = stk[top];
    top--;
    return ch;
}

void postfix_Eval()
{
    char postfix[10];
    int i, val1, val2, result;

    cout << "\n\t Enter Postfix Expression: ";
    cin >> postfix;

    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/')
        {
            val2 = pop();
            val1 = pop();
            switch (postfix[i])
            {
            case '+':
                result = val1 + val2;
                push(result);
                break;

            case '-':
                result = val1 - val2;
                push(result);
                break;

            case '*':
                result = val1 * val2;
                push(result);
                break;

            case '/':
                result = val1 / val2;
                push(result);
                break;
            }
        }
        else
        {
            push(postfix[i] - 48); // push int 53 - 48 = 5 Ascii value of 0-9 : 48 - 57
        }
    }
}

int main()
{

    postfix_Eval();
    cout << "\n\n\t Result : " << stk[top];

    return 0;
}

/****************************************************************
  Enter Postfix Expression: 57+


         Result : 12

    Enter Postfix Expression: 57+84-*


         Result : 48
  */