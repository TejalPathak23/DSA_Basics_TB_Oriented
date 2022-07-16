#include <iostream>
using namespace std;

char stk[10];
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

void infix_to_postfix()
{
	char infix[10];
	char postfix[10];

	int i, j = 0;
	char ch;

	cout << "\n\t Enter the Infix Expression: ";
	cin >> infix;

	for (i = 0; infix[i] != '\0'; i++)
	{
		if (infix[i] == 'a' || infix[i] == 'b' || infix[i] == 'c' || infix[i] == 'd')
		{
			postfix[j] = infix[i];
			j++;
		}
		else if (infix[i] == '(')
		{
			push(infix[i]);
		}
		else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/')
		{
			push(infix[i]);
		}
		else
		{
			ch = pop();
			while (ch != '(')
			{
				postfix[j] = ch;
				j++;
				ch = pop();
			}
		}
	}
	postfix[j] = '\0';

	cout << "\n\n\t Postfix = " << postfix;
}

int main()
{
	infix_to_postfix();

	return 0;
}

/*


         Enter the Infix Expression: (a+b)


         Postfix = ab+
--------------------------------
Process exited after 12 seconds with return value 0
Press any key to continue . . .


         Enter the Infix Expression: ((a+b)*(c-d))


         Postfix = ab+cd-*
--------------------------------
Process exited after 23.28 seconds with return value 0
Press any key to continue . . .

*/
