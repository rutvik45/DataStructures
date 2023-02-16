#include<iostream>
using namespace std;
int main()
{
int a[50],inc[3]={5,3,1},n_inc,increment,i,j,span,n,k,y;
cout<<"Enter size of array : ";
cin>>n;
cout<<"Enter array element"<<endl;
for(i=0;i<n;i++)
{
cin>>a[i];
}
n_inc=sizeof(inc)/sizeof(inc[0]); //To find length of array named inc.
cout<<"Size of inc array"<<n_inc<<endl;
cout<<"After shell sort : ";
for(increment=0; increment < n_inc; increment++)
{
//span is the size of increment
span = inc[increment];
for(j = span; j<n ; j++)
{
//inserts element a[j] into its proper position within
subfile
// sorting
y = a[j];
for(k = j-span; (k>=0 && y<a[k]); k= k-span)
{
a[k+span] = a[k];
}
a[k+span] = y;
 }
}
 for(i=0;i<n;i++)
{
cout<<a[i]<<"\t";
}
return 0;
}
