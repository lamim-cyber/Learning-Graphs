#include <bits/stdc++.h>
#define pb push_back
#define Code_Delete_Koren_Shomossha_hobe ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
const int N = 2e5+5;
using namespace std;
// here the problem states to find out the shortest path in a graph from 1 to n then print the path 
int visited[N];
int pre[N];// first parent from bfs

void solve()
{
    int n, m;
    cin>> n>> m;

    vector< int > a[n+1];
  //creating adj lists
    for(int i=1; i<=m; i++)
    {
        int x, y;
        cin>> x>> y;
        a[x].pb(y);
        a[y].pb(x);
    }
    queue < int> q;
    q.push(1);
    visited[1]=1;
  
    while(!q.empty())
    {
        int x= q.front();
        q.pop();
        for(int i=0; i<a[x].size(); i++)
        {
            if(visited[a[x][i]]==0)
            {
                if(pre[a[x][i]]==0)
                pre[a[x][i]]=x;

                visited[a[x][i]]=1;
                q.push(a[x][i]);
            }
        }

    }

    vector< int > path; // the shortest path from 1 to n

    if(pre[n]==0)
    {
        cout<< "IMPOSSIBLE"<< endl;
        return;
    }
    else
    {
        path.pb(n);
        int x= pre[n];
        
        while(x!=1)
        {
            path.pb(x);
            x= pre[x];
        }
        path.pb(x);
    }
    cout<< path.size()<< endl;
   
    for(int i= path.size()-1; i>=0; i--)cout<< path[i]<< " ";

}

int main()
{
    Code_Delete_Koren_Shomossha_hobe
    solve();
}
// https://cses.fi/problemset/task/1667/
