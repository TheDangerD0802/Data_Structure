//Circular Queue Array
#include<bits/stdc++.h>
using namespace std;
struct Queue{
	int *arr;
	int front,size,cap;
	Queue(int c)
	{
		arr = new int[c];
		cap = c;
		size = 0;
		front = 0;
	}
	int getrear(){		//get rear index of queue
		if(isEmpty())
		return -1;
		else
		return (front+size-1)%cap;
	}
	int getfront(){			//get index of front position
		if(isFull())
		return -1;
		else
		return front;
	}
	
	bool isFull(){				//checks if queue is full upto size of capacity
	return (size == cap);
	}
	bool isEmpty(){				//Check if no element is present in queue
		return (size == 0);
	}
	void enqueue(int x){	//add element in queue
		if(isFull())
		{
			return;
		}
		int rear = getrear();
		rear = (rear+1)%cap;
		arr[rear] = x;
		size++;
	}
	void dequeue(){			//remove element in FILO order
		if(isEmpty()) return;
		front = (front+1)%cap;
		size--;
		
	}
	
	
};
int main()
{
	Queue q = Queue(6);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	cout<<q.getfront()<<endl;
	q.dequeue();
	cout<<q.getfront()<<endl;
	cout<<q.getrear()<<endl;
	int i = q.front;
	int s = q.size;
	while(s!=0)
	{
		cout<<q.arr[i]<<" ";
		i++;
		s--; 
	}
	return 0;
	
  } 
