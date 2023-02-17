#include <bits/stdc++.h>
using namespace std;
class heaptree
{
	int n, heap[1000], i, parent, data, last,leftkey,rightkey,largechildkey,largechildindex;
	public:
		heaptree()
		{
			last = -1;
		}
		void get();
		void insertheap();
		void reheapup(int newindex);
		void swap(int newindex, int parent);
		void deleteheap(int root);
		void reheapDown (int heap[],int hroot,int last);
		void mininsertheap();
		void minreheapup(int newindex);
		void mindeleteheap(int root);
		void minreheapDown (int heap[],int hroot,int last);
		void display();
};

void heaptree::get()
{
	cout << "Enter range for the heap array: " << endl;
	cin >> n;
	for (i = 0; i < n; i++)
	heap[i] = -1;
}
//Implementation of Max Heap

void heaptree::insertheap()
{
	if (last >= n - 1)
	cout << " Heap is full" << endl;
	else
	{
		cout << "Enter new element: ";
		cin >> data;
		cout << endl;
		last = last + 1;
		heap[last] = data;
		reheapup(last);
	}
}
void heaptree::reheapup(int newindex)
{
	if (newindex != 0)
	{
		parent = (newindex - 1) / 2;
		if (heap[newindex] > heap[parent])
		{
			swap(newindex, parent);
			reheapup(parent);
		}
		else
		{
		return;
		}
	}
}
void heaptree::swap(int newindex, int parent)
{
	int temp;
	temp = heap[newindex];
	heap[newindex] = heap[parent];
	heap[parent] = temp;
}
void heaptree::deleteheap(int root)
{
	if (root == last)
	{
	heap[last] = -1;
	last = -1;
	return;
	}
	int child1, child2;
	heap[root] = heap[last];
	heap[last] = -1;
	last--;
	reheapDown(heap,0,last);
	cout << "Deleted root succesfully and the tree Satisfies the maxHeap property!" << endl;
}

void heaptree::reheapDown(int heap[],int hroot,int end)
{
	if (hroot * 2 + 1 <= end) 
	{
		leftkey = heap[hroot * 2 + 1];
		if (hroot * 2 + 2 <= end)
		{
		rightkey = heap[hroot * 2 + 2];
		}
		else
		rightkey = -1;
		if (leftkey > rightkey)
		{
		largechildkey = leftkey;
		largechildindex = hroot * 2 + 1;
		}
		else
		{
		largechildkey = rightkey;
		largechildindex = hroot * 2 + 1;
		}
		if ( heap[hroot] < heap[largechildindex] )
		{
		swap(hroot, largechildindex);
		reheapDown (heap,largechildindex, end);
		}
	}
	else
	return;
}




void heaptree::display()
{
if (last == -1)
{
cout << "Heap is empty!!\n";
return;
}
cout << "Elements in heap are: \t";
for (i = 0; i < n; i++)
if (heap[i] != -1)
cout << heap[i] << "\t";
}

//Implementation of MinHeap

void heaptree::mininsertheap()
{
if (last >= n - 1)
cout << " Heap is full" << endl;
else
{
cout << "Enter new element: ";
cin >> data;
cout << endl;
last = last + 1;
heap[last] = data;
minreheapup(last);
}
}
void heaptree::minreheapup(int newindex)
{
if (newindex != 0)
{
parent = (newindex - 1) / 2;
if (heap[newindex] < heap[parent])
{
swap(newindex, parent);
minreheapup(parent);
}
else
{
return;
}
}
}
void heaptree::mindeleteheap(int root)
{
if (root == last)
{
heap[last] = -1;
last = -1;
return;
}
int child1, child2;
heap[root] = heap[last];
heap[last] = -1;
last--;
minreheapDown(heap,0,last);
cout << "Deleted root succesfully and the tree Satisfies the maxHeap property!" << endl;
}

void heaptree::minreheapDown(int heap[],int hroot,int end)
{
if (hroot * 2 + 1 <= end)
{
leftkey = heap[hroot * 2 + 1];
if (hroot * 2 + 2 <= end)
{
rightkey = heap[hroot * 2 + 2];
}
else
rightkey = -1;
if (leftkey < rightkey)
{
largechildkey = leftkey;
largechildindex = hroot * 2 + 1;
}
else
{
largechildkey = rightkey;
largechildindex = hroot * 2 + 1;
}
if ( heap[hroot] > heap[largechildindex] )
{
swap(hroot, largechildindex);
minreheapDown (heap,largechildindex, end);
}
}
else
return;
}


int main()
{

int ch;
heaptree h;
int op;
h.get();
cout<<"Enter 1 to perform max heap operations and 2 to perform min heap operations ";
cin>>op;

if(op==1)
{
do
{
cout << "\n1:Insert \t2:Display \t3:Delete \t4:Exit" << endl;
cout << "enter choice: ";
cin >> ch;
switch (ch)
{
case 1:
h.insertheap();
break;
case 2:
h.display();
break;
case 3:
h.deleteheap(0);
break;
case 4:
exit(0);
default:
cout<<"Wrong choice"<<endl;
}
} while (ch != 4);
}

if(op==2)
{
do
{
cout<<"rushikesh sawant 93"<<endl;
cout << "\n1:Insert \t2:Display \t3:Delete \t4:Exit" << endl;
cout << "enter choice: ";
cin >> ch;
switch (ch)
{
case 1:
h.mininsertheap();
break;
case 2:
h.display();
break;
case 3:
h.mindeleteheap(0);
break;
case 4:
exit(0);
default:
cout<<"Wrong choice"<<endl;
}
} while (ch != 4);
}


return 0;
}
