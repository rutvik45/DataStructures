#include <iostream>

using namespace std;

// Creating a NODE Structure
struct node
{
int data;
struct node *next;
};

// Creating a class QUEUE
class queue

{
struct node *frnt,*rear;
public:
queue() // constructor
{
frnt=rear=NULL;
}
void insert(); // to insert an element
void del(); // to delete an element
void show(); // to show the queue
};

// Insertion
void queue::insert()
{
int value;
struct node *ptr;
cout<<"\nInsertion\n";
cout<<"Enter a number to insert: ";
cin>>value;
ptr=new node;
ptr->data=value;
ptr->next=NULL;
if(frnt==NULL)

frnt=ptr;
else
rear->next=ptr;
rear=ptr;
cout<<"\nNew item is inserted to the Queue!!!"<<endl;
}

// Deletion
void queue::del()
{
if(frnt==NULL)
{
cout<<"\nQueue is empty!!"<<endl;
return;
}
struct node *temp;
temp=frnt;
frnt=frnt->next;
cout<<"\nDeletion Operation........\nDeleted value is "<<temp-
>data<<endl;
delete temp;
}

// Show Queue

void queue::show()
{
struct node *ptr1=frnt;
if(frnt==NULL)
{
cout<<"The Queue is empty!!"<<endl;
return;
}
cout<<"\nThe Queue is\n";
while(ptr1!=NULL)
{
cout<<ptr1->data<<" ->";
ptr1=ptr1->next;
}
cout<<"END"<<endl;
}

// Main function
int main()
{
cout<<”Sangeeta Patel 75”;
queue q;
int choice;
while(1)

{
cout<<"\n-----------------------------------------------------------";
cout<<"\n\t\tQUEUE USING LINKED LIST\n\n";
cout<<"1:INSERTION\n2:DELETION\n3:DISPLAY QUEUE\n4:EXIT";
cout<<"\nEnter your choice(1-4): ";
cin>>choice;
switch(choice)
{
case 1:
q.insert();
break;
case 2:
q.del();
break;
case 3:
q.show();
break;
case 4:
return 0;
break;
default:
cout<<"Please enter correct choice(1-4)!!"<<endl;
break;
}

}
return 0;
}
