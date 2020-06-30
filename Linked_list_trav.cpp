#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node *next;	//same type as structure known as self refrential structute.
	node(int x)		//Constructor
	{
		data  = x;
		next = NULL;
	}
};
void traverse(node *head)	// Just print all Element
{
	if(head != NULL)
	{
		cout<<head->data<<" ";
		traverse(head->next);
	}
	else
	{
		return ;
	}
	
}
int search(node *head, int x)   	// Search given key
{
	int count = 1;
	node *temp = head;
while(temp!=NULL)
{
	if(temp->data == x)
	return count;
	else
	{
		count++;
		temp = temp->next;
	}
	
}
return -1;	
}
node *IAB(node *head, int x)  //Insert At starting
{
	node *begin = new node(x);
	begin->next = head;
	return begin;
}
node *IAE(node *head, int x)	//Insert at End
{
	node *temp = new node(x);
	node *curr;
	if(head == NULL)
	return temp;
	while(curr->next  != NULL)
	{
		curr = curr->next; 
	}
	curr->next = temp;
	
	return head;
}
node *DFN(node *head) 	//Delete first Node
{
	if(head == NULL)
	return NULL;
	else{
	node *temp = head->next;
	delete head;
	return temp;	
	}
}
node *DEN(node *head)
{
	if(head==NULL)
	return NULL;
	else if(head->next == NULL)
	{
		delete head;
		return NULL;
	}
	else
	{
		node *temp = head;
		while(temp->next->next !=NULL)
		{
		temp= temp->next;	
		}
		delete temp->next;
		temp->next = NULL;
		return head;
	}
}
node *IP(node *head, int x, int pos)
{
	node *temp = new node(x);
	if(pos == 1)
	{
		temp->next = head;
		return temp;
	}
  	node *y = head;
for(int i=1;i<=pos-2&&y!=NULL;i++)
{
	y = y->next;
}
if(y == NULL)
return head;
temp->next = y->next;
y->next = temp;
return head;
	
}
int main()
{
node *head = NULL;
head = IAB(head,30);
head = IAB(head,20);
head = IAB(head,10);
traverse(head);
head = DFN(head);
head = DEN(head);
traverse(head);
head = IP(head,15,2);
traverse(head);
return 0;
	
}
/*
node *head = new node(10);
head->next = new node(20);
head->next->next = new node(30);
*/

