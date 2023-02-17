#include<iostream>

using namespace std;

class StackOp{
private:

int n=100,stack[100],top=-1;
public:

void push(int val){
if(top>=n-1){
cout<<"Stack Overflow"<<endl;
}else{
top++;
stack[top]=val;
}
}

void pop(){
if(top<=-1){
cout<<"Stack Underflow"<<endl;
}else{
cout<<"The popped element is "<< stack[top] <<endl;
top--;
}
}

void display(){
if(top>=0){
cout<<"Stack elements are: \n";
for(int i=top;i>=0;i--){
cout<<stack[i]<<" ";
cout<<endl;
}
}else{
cout<<"Stack is empty"<<endl;
}
}

};

int main(){
StackOp s;
int ch,val;
cout<<"\n--------------------------------\n";
cout<<"ASHVIN SHETTY - FY-MCA-B-104 \n";

cout<<"\n--------------------------------\n";
cout<<"\nStack Operations\n";
cout<<"\n--------------------------------\n";

cout<<"1) Push in stack"<<endl;
cout<<"2) Pop from stack"<<endl;
cout<<"3) Display stack"<<endl;
cout<<"4) Exit"<<endl;
do{
cout<<"Enter choice: "<<endl;
cin>>ch;
switch(ch){

case 1: {
cout<<"Enter value to be pushed:"<<endl;
cin>>val;
s.push(val);
break;
}

case 2: {
s.pop();
break;
}

case 3: {
s.display();
break;
}

case 4: {

cout<<"Exit"<<endl;
break;
}

default: {
cout<<"Invalid Choice"<<endl;
break;
}
}
}while(ch!=4);

return 0;
}
