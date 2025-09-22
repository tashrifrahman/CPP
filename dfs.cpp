#include<bits/stdc++.h>
using namespace std;
#define white 0
#define gray  1
#define black 2
int node,edge,t, graph[105][105],visit[1005];
int color[1005],dis[1005],fin[1005],parent[1005];

void DFS_Visit(int u)
{
    color[u] = gray;
    t = t + 1;
    dis[u] = t;
    cout<<u<<" ";
    for(int i=1;i<=node; i++)
    {
        if(graph[u][i]==1)
        {
            if(color[i] == white)
            {
                parent[i] = u;
                DFS_Visit(i);
            }
        }
    }
    color[u] = black;
    t = t + 1;
    fin[u] = t;

}

void DFS()
{
    for(int i=1; i<=node; i++)
    {
        color[i] = white;
        parent[i] = -1;
    }
    t = 0;
    for(int i=1; i<=node; i++)
    {
        if(color[i]==white)
        {
            DFS_Visit(i);
        }
    }
}

int main()
{
    cout<<"Enter the number of node and edge: ";
    cin>>node>>edge;

    int u,v;
    for(int i=0; i<edge; i++){
        cin>>u>>v;

        graph[u][v]=1;
        graph[v][u]=1;
    }

    cout<<"After traverse: ";

    DFS();
    cout<<endl<<endl;

    for(int i = 1;i<=node; i++)
    {
        cout<<"Node "<<i<<": "<<"S: "<<dis[i]<<" & F: "<<fin[i]<<endl;
    }

    return 0;
}


/**
1 2
1 3
1 5
2 5
3 4
4 5
3 5
*/
