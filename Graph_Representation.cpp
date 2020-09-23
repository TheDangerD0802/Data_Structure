#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][n] = {0};
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        if(arr[a][b]==1 )
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
