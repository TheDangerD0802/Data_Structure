#include <bits/stdc++.h> 
using namespace std; 
int evaluatePostfix(string &st)
{
    int length = st.length();
	    stack<int> s;
	    s.push(-1);
	    for(int i = 0; i < length; i++)
	    {
	        if(isdigit(st[i]))
	            s.push(st[i]-'0');
	       else{
	           int b = s.top();
	           s.pop();
	           int a = s.top();
	           s.pop();
	       switch(st[i])
	       {
	           case '+':{int c = a + b;s.push(c);break;}
	           case '-':{int c = a - b;s.push(c);break;}
	           case '*':{int c = a * b;s.push(c);break;}
	           case '/':{int c = a / b;s.push(c);break;}
	       }
	    }
	    
	    }
	   return s.top();
}

int main() 
{ 
    string exprsn ;
	cin>>exprsn; 
    cout << evaluatePostfix(exprsn) << endl; 
    return 0; 
}
