


/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
double func(double x)
{ 
return 2*x*x - 12*x +7; 
}
long long ts(double start, double end)
{
    double l = start, r = end;

    for(int i=0; i<200; i++) {
      double l1 = (l*2+r)/3;
      double l2 = (l+2*r)/3;
      //cout<<l1<<" "<<l2<<endl;
      if(func(l1) < func(l2)) r = l2; else l = l1;
      }

     double x = l;
    return (long long)floor(func(x));
}
int main()
{
    int n;
    cin>>n;
    while(n--){
    long long l,r;
    cin>>l>>r;
    double start=l;
    double end=r;
    cout<<ts(start,end)<<endl;
    }
}
