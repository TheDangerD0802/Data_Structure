#include<bits/stdc++.h>
using namespace std;
struct Edge
{
	int u;	//Source
	int v;	//destination
	int w;	//Weight
};
struct Graph {
	int V;	//total no vertices
	int E;	//total no of edges
	struct Edge* edge;	//array of edges
};
struct Graph* createGraph(int V, int E)
{
	struct Graph* graph = new Graph;
	graph->V = V;
	graph->E = E;
	
	graph->edge = new Edge[E];
	return graph;
}
void print(int arr[] ,int size)
{
	int i;
	for(i=0;i<size;i++)
	cout<<arr[i]<<" ";
}
void BellmanFord(struct Graph* graph, int u)
{
	int V = graph->V;
	int E = graph->E;
	int dist[V];
	
	for(int i=0;i<V;i++)
	{
		dist[i] = INT_MAX;
	}
	
	dist[u] = 0;
	
	for(int i=1;i<=V-1;i++)
	{
		for(int j=0;j<E;j++)
		{
			int u = graph->edge[j].u;
			int v = graph->edge[j].v;
			int w = graph->edge[j].w;
			if(dist[u]!=INT_MAX && dist[u]+w<dist[v])
			dist[v] = dist[u]+w;
		}
	}
	
	for (int i = 0; i < E; i++) {
    int u = graph->edge[i].u;
    int v = graph->edge[i].v;
    int w = graph->edge[i].w;
    if (dist[u] != INT_MAX && dist[u] + w < dist[v]) {
      printf("Graph contains negative w cycle");
      return;
    }
  }	
  
  print(dist,V);
	
}
int main()
{
	
	int n,m;
	cin>>n>>m;
	struct Graph* graph = createGraph(n , m);
	
	for(int i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		graph->edge[i].u = a;
  		graph->edge[i].v = b;
  		graph->edge[i].w = c;
	}
	
	BellmanFord(graph,0);
	return 0;
	
	
}
