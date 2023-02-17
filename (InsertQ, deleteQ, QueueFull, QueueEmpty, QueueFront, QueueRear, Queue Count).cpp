#include <iostream>
using namespace std;

class Queue{

public:
int queue[100], n = 100, front = - 1, rear = - 1;

void Insert() {
int val;
if (rear == n - 1)
cout<<"Queue Overflow"<<endl;
else {
if (front == - 1)
front = 0;
cout<<"Insert the element in queue : "<<endl;
cin>>val;
rear++;
queue[rear] = val;
}
}
void Delete() {
if (front == - 1 || front > rear) {
cout<<"Queue Underflow ";
return ;
} else {
cout<<"Element deleted from queue is : "<< queue[front] <<endl;
front++;;
}
}
void Display() {
if (front == - 1)
cout<<"Queue is empty"<<endl;
else {

cout<<"Queue elements are : ";
for (int i = front; i <= rear; i++)
cout<<queue[i]<<" ";
cout<<endl;
}

}

void QueueFull(){
if (rear == n - 1)
cout<<"Queue Overflow"<<endl;
else{
cout<<"Queue is not full"<<endl;
}
}

void QueueEmpty(){
if (front == - 1)
cout<<"Queue is empty"<<endl;
else{
cout<<"Queue is not empty"<<endl;
}
}

void QueueFront(){
cout<<queue[0]<<endl;
}

void QueueRear(){

cout<<queue[n-1]<<endl;
}

};

int main() {
int ch;
Queue u;
cout<<"1) Insert element to queue"<<endl;
cout<<"2) Delete element from queue"<<endl;
cout<<"3) Display all the elements of queue"<<endl;
cout<<"4) Exit"<<endl;
cout<<"5) Check if queue is full "<<endl;
cout<<"6) Check if queue is empty"<<endl;
cout<<"7) Display front element"<<endl;
cout<<"8) Display rear element"<<endl;

do {
cout<<"Enter your choice : "<<endl;
cin>>ch;
switch (ch) {
case 1: u.Insert();
break;

case 2: u.Delete();
break;
case 3: u.Display();
break;
case 4: cout<<"Exit"<<endl;
break;
case 5: u.QueueFull();
break;
case 6: u.QueueEmpty();
break;
case 7: u.QueueFront();
break;
case 8: u.QueueRear();
break;
default: cout<<"Invalid choice"<<endl;
}
} while(ch!=4);
return 0;
}
