/*
You have been given a Tree consisting of N nodes. A tree is a fully-connected graph consisting of N nodes and N-1 edges. 
The nodes in this tree are indexed from 1 to N. Consider node indexed 1 to be the root node of this tree. 
The root node lies at level one in the tree. You shall be given the tree and a single integer x . You need to find out the number of nodes lying on level x.
*/





#include<bits/stdc++.h>
using namespace std;
vector <int> v[100001];
bool vis[100000] = {false};
int level[10000];
int k;
void bfs(int s,int x) {
        queue <int> q;
        q.push(s);
        level[ s ] = 1 ;  //Setting the level of the source node as 0
        vis[ s ] = true;
        while(!q.empty())
        {
            int p = q.front();
            q.pop();
            for(int i = 0;i < v[ p ].size() ; i++)
            {
                if(vis[ v[ p ][ i ] ] == false)
                {
            //Setting the level of each node with an increment in the level of parent node
                    level[ v[ p ][ i ] ] = level[ p ]+1; 
                    if(level[v[p][i]]==x)
                    {
                        k++;
                    }                   
                     q.push(v[ p ][ i ]);
                     vis[ v[ p ][ i ] ] = true;
      }
            }
        }
    }
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int x;
    cin>>x;
    bfs(1,x);
    cout<<k<<endl;
    
    //cout<<level[x]<<endl;
}
