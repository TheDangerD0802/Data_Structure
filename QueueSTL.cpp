//Queue in STL
#include<bits/stdc++.h>
using namespace std;
int main()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	cout<<q.front()<<" "<<q.back()<<endl;
	q.pop();
	cout<<q.front()<<" "<<q.back()<<endl;
	q.push(40);
	q.push(50);
	while(q.empty()==false)
	{
		cout<<q.front()<<endl;
		q.pop();
	}
	return 0;
}
/*
Function Present:
1. Push = enque
2. pop = deque
3. front = give front index
4. back = give rear index
5. empty = tell if queue is empty or not
6. size = total element presented in queue

Time Complexity = O(1)
*/
