/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int k = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        k = max(k,arr[i]);
    }
    //cout<<k;
    int aux[k+1] = {0};
    for(int i=0;i<n;i++)
    {
        aux[arr[i]]++;
    }
    for(int i=0;i<=k;i++)
    {
        if(aux[i]!=0)
        cout<<i<<" "<<aux[i]<<endl;
    }
    return 0;
    
}
