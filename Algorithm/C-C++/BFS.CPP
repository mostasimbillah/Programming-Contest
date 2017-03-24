#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
int visited[100];
void bfs(int s,int n)
{
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
    }
    queue<int> Q;
    Q.push(s);
    visited[s]=1;
    while(!Q.empty())
    {
        int u =Q.front();
        Q.pop();
        cout << u << endl;
        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0)
            {
                int v=adj[u][i];
                visited[v]=1;
                Q.push(v);
            }
        }
    }
}
int main()
{
    int node;
    cin >> node;
    for(int i=0;i<node;i++)
    {
        int edge;
        cin >> edge;
        for(int j=0;j<edge;j++)
        {
            int way;
            cin >> way;
            adj[i].push_back(way);
        }
    }
    for(int ii=0;ii<node;ii++)
    {
        for(int jj=0;jj<adj[ii].size();jj++)
        {
            cout << adj[ii][jj] << " ";
        }
        cout << endl;
    }

    bfs(adj[1][1],node);


    return 0;
}
