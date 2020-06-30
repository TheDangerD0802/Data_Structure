#include<bits/stdc++.h>
using namespace std;
struct node{				//STRUCTURE OF NODE
	int data;
	node *prev;
	node *next;
	 node(int x)			//CONSTRUCTOR
	{
		data = x;
		prev = NULL;
		next = NULL;
	}
};
node *IAB(int x, node *head)		//INSERT AT STARTING
{
	
	node *temp = new node(x);
	temp->next = head;
	if(head!=NULL)
	head->prev = temp;
	return temp;
}
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
node *IAE( int x,node *head)   		//INSERT AT END
{
	node *temp = new node(x);
	node *curr = head;
	if(head == NULL)
	{
		return temp;
	}
	while( curr->next != NULL )
	{
		curr=curr->next;
	}
	curr->next = temp;
	temp->prev = curr;
	return head;
	
}
node *reverse(node *head)  		//REVERSING THE LINKED LIST
{
	
	if(head == NULL || head->next == NULL)
	{return head;}
	
	node *prev = NULL , *curr = head;
	while(curr != NULL)
	{
		prev = curr->prev;
		curr->prev = curr->next;
		curr->next = prev;
		curr = curr->prev;		
	}
	
	return prev->prev;
}
node *DAB(node *head)		//DELETE AT STARTING
{
	if(head==NULL)
	return head;
	if(head->next == NULL)
	{
		delete head;
		return NULL;
	}
	node *curr = head->next;
	curr->prev = NULL;
	delete head;
	return curr;
}
node *DAE(node*head)		//Delete AT END
{
	if(head == NULL )
	
	if( head->next == NULL)
	{
		delete head;
		return head;
	}
	
	node *curr = head;
	while(curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->prev->next = NULL;
	delete curr;
	return head;
	
}
int main()
{
	node *head = NULL;
	head = IAE(10,head);
	head = IAE(20,head);
	head = IAE(30,head);
	head = IAE(40,head);
	traverse(head);
	head = reverse(head);
	cout<<endl;
	traverse(head);
	head = DAB(head);
	cout<<endl;
	traverse(head);
	head = DAE(head);
	cout<<endl;
	traverse(head);
	return 0;
}
