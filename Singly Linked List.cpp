#include<iostream>
using namespace std;
class Node{
	public:
		int key;
		int data;
		Node* next;
	Node()
	{
	 	key=0;
	 	data=0;
	 	next=NULL;
	}
	Node( int k, int d)
	{
		key=k;
		data=d; 
	}
};
class SingelyLinkedList{
	public:
		Node* head;
	SingelyLinkedList()
	{
		head=NULL;
	}
	SingelyLinkedList(Node *n)
	{
		head=n;
	}
	//if node exist using key val
	Node* nodeExists(int k)
	{
		Node* temp=NULL;
		Node* ptr=head;
		while(ptr!=NULL)
		{
		  if(ptr->key==k)
		  {
		  	temp=ptr;
	        }
	        ptr=ptr->next;
		}
		return temp;
	}
	//append to list at end 
	void appendNode(Node* n)
	{
		if(nodeExists(n->key)!=NULL)
		{
			cout<<"node wih key val already exist"<<n->key<<endl;
		}
		else
		{
			if(head==NULL)
			{
				head=n;
				cout<<"node appended";
			}
			else
			{
				Node* ptr=head;
				while(ptr->next!=NULL)
				{
					ptr=ptr->next;
				}
				ptr->next=n;
				cout<<"node appended"<<endl;
			}
		}
	}
	//prepend node at beggining
	void prependNode(Node* n)
	{
		if(nodeExists(n->key)!=NULL)
		{
			cout<<"node wih key val already exist"<<n->key<<endl;
		}
		else
		{
		  	if(head==NULL)
			{
				head=n;
				cout<<"node appended";
			}
			else
			{
			  n->next=head;
			  head=n;
			  cout<<"node prepended"<<endl;	
			}
		}
	}
	//insert in list
	void Insert(int k,Node* n)
	{
		Node* ptr=nodeExists(k);
		if(ptr==NULL)
		{
			cout<<"no node exixt with key"<<k<<endl;
		}
		else
		{
			if(nodeExists(n->key)!=NULL)
		           {
			           cout<<"node wih key val already exist"<<n->key<<endl;
		           }
		    else
		    {
		    	n->next=ptr->next;
		    	ptr->next=n;\
		    	cout<<"node inserted"<<endl;
			}
		
	    }
	}
	//delete by key
	void Delete(int k)
	{
		if(head==NULL)
		           {
			           cout<<"node empty"<<endl;
		           }
		else if(head!=NULL)
		    {
		    	if(head->key==k)
		    	{
		    		head=head->next;
		    		cout<<"node unliked"<<k<<endl;
				}
				else
				{
					Node* temp=NULL;
					Node* prevptr=head;
					Node* currentptr=head->next;
					while(currentptr!=NULL)
					{
						if(currentptr->key==k)
						{
							temp=currentptr;
							currentptr=NULL;
						}
						else
						{
							prevptr=prevptr->next;
							currentptr=currentptr->next;
						}
					}
					if(temp!=NULL)
					{
						prevptr->next=temp->next;
						cout<<"node unliked"<<k<<endl;
					}
					else
					{
						cout<<"node with key dont exist";
					}
				}
			}
		
	}
    //print 
    void Print()
    {
    	if(head==NULL)
    	{
    		cout<<"no nodes in liked list";
		}
		else
		{
			cout<<"values";
			Node* temp=head;
			while(temp!=NULL)
			{
				cout<<"("<<temp->key<<","<<temp->data<<")-->";
				temp=temp->next;
			}
			cout<<"NULL"<<endl;
		}
	}
		
		
};
int main()
{
  SingelyLinkedList s;
   int option;
  int key1, k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. print()" << endl;
    cout << "6. Clear Screen" << endl << endl;

    cin >> option;
    Node * n1 = new Node();
    //Node n1;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.appendNode(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.prependNode(n1);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;

      s.Insert(k1, n1);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      s.Delete(k1);

      break;
    case 5:
      s.Print();

      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

}
