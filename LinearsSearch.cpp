#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int arr[10], i, key, n, count=0, pos;
cout<<"Enter the array size : ";
cin>>n;
cout<<"Enter Array Elements : ";
for(i=0; i<n; i++)
{
cin>>arr[i];
}
cout<<"Enter the number to be search : ";
cin>>key;
for(i=0; i<n; i++)

{
if(arr[i]==key)
{
count=1;
pos=i+1;
//cout<<num<<" found at position "<<i+1;
break;
}

}
if(count==0)
{
cout<<"Number not found..!!";
}
else
{
cout<<key<<" found at position "<<pos;
}
getch();
}
