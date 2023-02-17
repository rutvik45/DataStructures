#include <iostream>
#include <string.h>
using namespace std;

class stacks
{
private:
int a[5],n,TOP;
public:
stacks()
{
TOP=-1;
}

void push(int);
int pop();

};

void stacks::push(int n)
{
if(TOP==4)
{

cout<<"Stack Overflow"<<endl;
}
else
{
++TOP;
a[TOP]=n;
cout<<n<<" is pushed onto the stack "<<endl;
}
}

int stacks::pop()
{
if(TOP==-1)
cout<<"Stack Underflow"<<endl;
else
{

return a[TOP--];

}

}

int main()
{

char x[30];
int a, b;
stacks s1;
cout<<"Enter the balanced expression\n";
cin>>x;
for (int i = 0; i < strlen(x); i++)
{
if (x[i] >= 48 && x[i] <= 57)
s1.push(x[i]-'0');
// s1.push(x[i]);
else if (x[i] >= 42 && x[i] <= 47)
{

a=s1.pop();
cout<<a<<endl;
b=s1.pop();
cout<<b<<endl;
switch(x[i])
{
case '+':
s1.push(a+b);
break;
case '-':
s1.push(a-b);
break;
case '*':

s1.push(a*b);
break;
case '/':
s1.push(a/b);
break;
}
}
}
cout<<"ans is "<<s1.pop()<<endl;
return 0;
}
