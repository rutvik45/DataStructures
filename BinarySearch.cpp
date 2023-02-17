#include <iostream>
using namespace std;
int main()
{
int count, i, arr[30], num, low, high, middle;
cout<<"how many elements would you like to enter?:";
cin>>count;

for (i=0; i<count; i++)
{
cout<<"Enter number "<<(i+1)<<": ";

cin>>arr[i];
}
cout<<"Enter the number that you want to search:";
cin>>num;
low = 0; //1 2 3 4 5 8
high = count-1; // 0 low
middle = (low+high)/2;
while (low <= high)
{
if(arr[middle] < num)
{
low = middle + 1;

}
else if(arr[middle] == num)
{
cout<<num<<" found in the array at the location "<<middle+1<<"\n";

break;
}
else { //if element to be serach is less than middle
high = middle - 1; // 1 2 3 4 5 6 7 8 9
} // low high mid high
middle = (low + high)/2;
}
if(low > high)
{
cout<<num<<" not found in the array";
}
return 0;
}
