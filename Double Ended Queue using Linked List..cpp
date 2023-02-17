#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class node
{
public:
int data;
class node *next;
class node *prev;
};
class dqueue: public node
{
node *head,*tail;
int top1,top2;
public:
dqueue()
{
top1=0;
top2=0;
head=NULL;
tail=NULL;
}
void push(int x){
node *temp;
int ch;
if(top1+top2 >=5)
{
cout <<"Deque overflow!";
return ;
}
if( top1+top2 == 0)
{
head = new node;
head->data=x;
head->next=NULL;
head->prev=NULL;
tail=head;
top1++;

}
else
{
cout <<"\nAdd element at position\n1.FIRST\n2.LAST\nEnter your choice: ";
cin >> ch;
if(ch==1)
{
top1++;
temp=new node;
temp->data=x;
temp->next=head;
temp->prev=NULL;
head->prev=temp;
head=temp;
}
else
{
top2++;
temp=new node;
temp->data=x;
temp->next=NULL;
temp->prev=tail;
tail->next=temp;
tail=temp;
}
}
}
void pop()
{
int ch;
cout <<"Delete:\n1.First Node\n2.Last Node\nEnter your choice: ";
cin >>ch;
if(top1 + top2 <=0)
{
cout <<"\nDeque under flow!";
return;
}
if(ch==1)
{
head=head->next;

head->prev=NULL;
top1--;
}
else
{
top2--;
tail=tail->prev;
tail->next=NULL;
}
}
void display()
{
int ch;
node *temp;
cout <<"Display from:\n1.Starting\n2.Ending\nEnter your choice: ";
cin >>ch;
if(top1+top2 <=0)
{
cout <<"Deque underflow!";
return ;
}
if (ch==1)
{
temp=head;
while(temp!=NULL)
{
cout << temp->data <<" ";
temp=temp->next;
}
}
else
{
temp=tail;
while( temp!=NULL)
{
cout <<temp->data << " ";
temp=temp->prev;
}
}
}

};
int main()
{
dqueue d1;
int ch;
while (1)
{
cout<<"\n91 Sahil Sagvekar\n";
cout <<"\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\nEnter your choice: ";
cin >>ch;
switch(ch)
{
case 1: cout <<"Enter element: ";
cin >> ch;
d1.push(ch); break;
case 2: d1.pop();
break;
case 3: d1.display();
break;
case 4: exit(1);
}
}}
