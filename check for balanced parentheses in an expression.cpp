#include<iostream>
#include<stack>
#include<conio.h>
#include <string.h>
using namespace std;

class stacks
{
private:
char a[10],n;
int top1;

public:
stacks()
{
top1=-1;
}

void push(char);
int pop();
char top();
bool areParanthesisBalanced(char[]);

};

void stacks::push(char n)
{
if(top1==9)
{
cout<<"Stack Overflow"<<endl;
}
else
{
++top1;
a[top1]=n;
cout<<n<<" is pushed onto the stack "<<endl;
}
}

int stacks::pop()
{
if(top1==-1)
cout<<"Stack Underflow"<<endl;
else
{

return a[top1--];

}

}

char stacks::top()
{
if(top1==-1)
{
cout<<"Stack is Empty"<<endl;
}
else
{
cout<<"Element at stack top is :"<<a[top1]<<endl;
}
}

// function to check if paranthesis are balanced
bool stacks::areParanthesisBalanced(char expr[])
{
//stacks s;
char a, b, c;

// Traversing the Expression
for (int i=0; i<strlen(expr); i++)
{
if (expr[i]=='('||expr[i]=='['||expr[i]=='{')
{
// Push the element in the stack

push(expr[i]);
}
else
{
if (top1==-1)
return false;

switch (expr[i]) // }
{
case ')':

// Store the top element in a

a = top(); //a=()
pop(); //{(
if (a=='{'||a=='[') // {
cout<<"Not Balancedn";
break;
case '}':

// Store the top element in b
b = top();
pop();
if (b=='('||b=='[')
cout<<"Not Balancedn";
break;
case ']':

// Store the top element in c

c=top();//( ]
pop();
if (c=='('||c=='{')
cout<<"Not Balancedn";
break;
}
}
}

// Check Empty Stack
if (top1==-1)
return true;
else
return false;
}

// Driver program to test above function
int main()
{

stacks s;
char expr[]="{()}";

if(s.areParanthesisBalanced(expr))
cout<<"Balanced";
else
cout<<"Not Balanced";
getch();
return 0;

}
