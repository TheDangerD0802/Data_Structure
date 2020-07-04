//Data structure Queue
/* Application:
1. Synchronisation between slow and fast devices
2. O.S -> Semaphore, FCFS Secheduling ,Spooling , Buffer for devices like Keyboard
3. In network -> Queues in Routers/Switches, Mail Queues
4. In from of Deque, priority Queue ans Doubly Ended priority Queue.
*/

#include<bits/stdc++.h>
using namespace std;
struct Queue{			//Structure of Queue
	int size,cap;
	int *arr;
	Queue(int c)		//Constructor
	{
		cap = c;
		size = 0;
		arr = new int[c];
		
	}
	void enqueue(int x){	//add element in queue
		if(isFull())
		{
			return;
		}
		arr[size] = x;
		size++;
	}
	void dequeue(){			//remove element in FILO order
		if(isEmpty()) return;
		for(int i=0; i<size-1; i++)
		arr[i] = arr[i+1];
		size--;
	}
	int getfront(){			//get index of front position
		if(isFull())
		return -1;
		else
		return 0;
	}
	int getrear(){		//get rear index of queue
		if(isEmpty())
		return -1;
		else
		return size-1;
	}
	bool isFull(){				//checks if queue is full upto size of capacity
	return (size == cap);
	}
	bool isEmpty(){				//Check if no element is present in queue
		return (size == 0);
	}
	
	
};
int main()
{
	Queue q = Queue(10);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.dequeue();
	cout<<q.getrear()<<endl;
	for(int i=0;i<q.size;i++)
	{
		cout<<q.arr[i]<<" ";
	}
	return 0;
	
  }  
