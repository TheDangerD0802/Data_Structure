//CIRCULAR LINKED LIST
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
	node(int x)
	{
		data = x;
		next = NULL;
	}
};
void traverse(node *head)		//Traversal
{
	if(head == NULL)
	return ;
	node *p = head;
	do
	{
		cout<<(p->data)<<" ";
		p = p->next;
	}while(p!= head);
	return ;
	
}
node *IAS(node *head , int x)
{
	node *temp = new node(x);
	if(head == NULL)
	{
		temp->next = temp;
	}
	else
	{
	node *p = head;
	while(p->next != head)
	{
		p = p->next;
	}
	p->next = temp;
	 temp->next = head;
	}
	return temp;		//head can replace temp for insert at end
}
node *IAE(node *head , int x)
{
	node *temp = new node(x);
	if(head == NULL)
	{
		temp->next = temp;
	}
	else
	{
	node *p = head;
	while(p->next != head)
	{
		p = p->next;
	}
	p->next = temp;
	 temp->next = head;
	}
	return head;		//head can replace temp for insert at end
}
node *DE(node *head)
{
	if(head == NULL)
	return NULL;
	if(head->next == NULL)
	return NULL;
	else
	{
		node *p = head;
		node *t;
		while(p->next->next != head)
		{
			p = p->next;
			t = p->next;
		}
		delete t;
		p->next = head;
		
		return head;
	}
}
node *DH(node *head)
{
	if(head == NULL)
	return NULL;
	if(head->next == head)
	{
		delete head;
		return NULL;
	}
	head->data = head->next->data;
	node *temp = head->next;
	head->next = head->next->next;
	delete temp;
	return head;
}
node *DK(node *head, int k)
{
	if(head == NULL)
	return head;
	if(k==1)
	return DH(head);
	node *curr = head;
	for(int i=0; i<k-1; i++) 
	curr = curr->next;
	node *temp = curr->next;
	curr->next = curr->next->next;
	delete temp;
	return head;
}
int main()
{
	node *head = new node(10);
	node *node1 = new node(20);
	node *node2 = new node(30);
	node *node3 = new node(40);
	head->next = node1;
	node1->next = node2;
	node2->next = node3;
    node3->next = head;
	traverse(head);
	head = IAS(head,5);
	cout<<endl;
	traverse(head);
	cout<<endl;
	head = IAE(head,50);
	traverse(head);
	cout<<endl;
	head = DH(head);
	traverse(head);
	cout<<endl;
	head = DE(head);
	traverse(head);
	cout<<endl;
	head = DK(head,2);
	traverse(head);
}
