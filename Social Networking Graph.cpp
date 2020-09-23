#include<bits/stdc++.h>
using namespace std;
vector <int> vec[1000001];
bool vis[1000001] ;
int level[1000001];
void bfs(int s)
{
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
				q.push(vec[p][i]);
                vis[vec[p][i]] = true;
			}
			
		}
	}
 
}
int main()
{
    int n,e;
    cin>>n>>e;

    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    int q;
    cin>>q;
    while(q--)
    {
        memset(vis,0,sizeof(vis));
        memset(level,0,sizeof(level));
        int ans = 0;
        int a,b;
        cin>>a>>b;
        bfs(a);
        for(int i=0;i<=n;i++)
        {
            if(abs(level[i]-level[a])==b)
            ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}
