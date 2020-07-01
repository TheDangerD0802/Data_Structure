//Stack Implementation - Array 
#include<bits/stdc++.h>
using namespace std;
int top = -1 , capacity = 10 ;
int arr[10];
int display_top()
{
	if(top == -1)
	return 0;
	else
	return arr[top];
}
void push( int x)
{
	if(top == capacity - 1)
	{
		cout<<"Overflow"<<endl;
		exit(1);
	}
	top++;
	arr[top] = x;
}
int pop()
{
	if(top == -1)
	{
		cout<<"Underflow"<<endl;
		exit(1);
	}
	int res = arr[top--];
	return res;
}

int main()
{
	
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	pop();
	while(top!=-1)
	{
	cout<<display_top()<<endl;
	pop();
	}
}
