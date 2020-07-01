//Stack Data Structure  -- STL C++
/*
	Application of stack
	1. Function Calls
	2. Checking for Balanced Paranthesis
	3. Reversing item
	4. Infix to Prefix/Postfix
	5. Evaluation of Postfix/Prefix
	6. Stock span Problem and its variations
	7. Undo/Redo or Forward/Backward
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<s.size()<<endl;
	s.pop();
	cout<<s.top()<<endl;
	while(s.empty() == false)		
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	
	return 0;
}
/*
Operation:- 
1. Element at top  - top()
2. size of stack  - size()
3. Return true if empty or not - empty()
4. Insert an element at top - push_back()
5. Delete an element from top - pop_back()
Time Complexity - O(1)
*/
