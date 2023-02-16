#include<iostream>
using namespace std;
int main()
{
int arr[5],i,j,temp,min_index;
cout<<"Selection Sort"<<endl;
cout<<"Input 5 number for sorting"<<endl;
for(i=0;i<5;i++)
{
cin>>arr[i];
}
cout<<"Sorted numbers are"<<endl;
for(i=0;i<4;i++) // n-1 passes
{
 min_index=i;
 for(j=i+1;j<5;j++)
{
if(arr[min_index]>arr[j])
min_index = j;
}
 if(min_index != i) //place smallest element at ith place
 {
 temp= arr[i];
 arr[i]=arr[min_index];
 arr[min_index]=temp;
}
}
for(i=0;i<5;i++)
{
cout<<arr[i]<<endl;
}
return(0);
}
