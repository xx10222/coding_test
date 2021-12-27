#include <queue>
#include <iostream>

using namespace std;

int n,m;
int graph[200][200];
int dx[4]={-1, 1, 0, 0};
int dy[4]={0, 0, -1, 1};

int bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push(make_pair(x,y));
    
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        for(int i=0;i<4;i++)
        {
            int nx = x+dx[i];
            int ny = y+dy[i];
            
            if(nx<0 || ny<0 || nx>=n || ny>=m)
                continue;
            
            if(graph[nx][ny]==0)
                continue;
            
            if(graph[nx][ny]==1)
            {
                graph[nx][nx]=graph[x][y]+1;
                q.push(make_pair(nx,ny));
            }
        }
    }
    return graph[n-1][m-1];
}

int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>graph[i][j];
        }
    }
    
    cout<<bfs(0,0);
    return 0;
}
