#include<bits/stdc++.h>
using namespace std;
#define white 0
#define gray  1
#define black 2

int node,edge,graph[105][105],visit[1005],color[1005],dis[1005],parent[1005];

void bfs(int source)
{
    queue<int>Q;

    Q.push(source);

    dis[source]=0;

    color[source] = gray;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        cout<<u<<" ";

        for(int i=1; i<=node; i++)
        {
            if(graph[u][i] == 1 && color[i] == white)
            {
                Q.push(i);
                color[i] = gray;
                dis[i] = dis[u] + 1;
                parent[i] = u;
            }
        }
        color[u] = black;
    }
}

int main()
{
    cout<<"Enter the number of node and edge: ";
    cin>>node>>edge;

    int u,v;
    for(int i=0; i<edge; i++)
    {
        cin>>u>>v;

        graph[u][v]=1;
        graph[v][u]=1;
    }

    cout<<"After travers: ";
    bfs(1);
    cout<<endl<<endl<<"Distance are: "<<endl;

    for(int i=1; i<=node; i++)
    {
        cout<<i<<" ----> "<<dis[i]<<endl;
    }

    cout<<"Parent of 4: " <<parent[4]<<endl;
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
**/
