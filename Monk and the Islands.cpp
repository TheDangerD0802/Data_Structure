#include<bits/stdc++.h>
using namespace std;

bool vis[10002];
int level[100001];
int bfs(int s, vector <int> vec[],int e)
{
    int count=0;
	queue <int> q;
	q.push(s);
	vis[s] = true;
    level[s] = 0;
	while(!q.empty())
	{
		int p = q.front();
		q.pop();
		for(int i=0;i<vec[p].size();i++)
		{
			if(vis[vec[p][i]]==false)
			{
                level[vec[p][i]]=level[p]+1;
                count = level[vec[p][i]];
				q.push(vec[p][i]);
				
				if(vec[p][i] == e)
                return count;
                vis[vec[p][i]] = true;
			}
			
		}
	}
    return count;

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        memset(vis,0,sizeof(vis));
		int n,m;
		cin>>n>>m;
		vector <int> vec[n+1];
		for(int i=0;i<m;i++)
		{
			int a,b;
			cin>>a>>b;
			vec[a].push_back(b);
			vec[b].push_back(a);
		}
		
		
		cout<<bfs(1,vec,n)<<endl;

		
	}
}
