#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define Code_Delete_Koren_Shomossha_hobe ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
const int N = 2e5+5;
using namespace std;

int visited[N];

void solve()
{
    int n;
    cin>> n;
  
    int x, y;
    cin>> x>> y;
  
    vector< int > v[n+1];//adjacency list for storing the graph
  
    while(x!=-1 && y!= -1)
    {
        v[x].pb(y);
        v[y].pb(x);
        cin>> x>> y; // taking inputs
    }
    queue < int > q;
    q.push(1);// here i started from 1 , but it can be anything 
    vector< int > order; // traversing order
    while(!q.empty())
    {
       int a= q.front();
       q.pop();
       if(visited[a]==0)
       {
           order.pb(a);
           visited[a]=1;//marked as visited
       }

       for(int i=0; i<v[a].size(); i++)
       {
           if(visited[v[a][i]]==0)
            q.push(v[a][i]);// taking all the neighbors which are not visited yet
       }
    }

    for(int i=0; i<order.size(); i++)cout<< order[i]<< " ";
    cout<< endl;

}

int main()
{
    Code_Delete_Koren_Shomossha_hobe
    solve();
}
//can implement flood fill
//shortest path from one node another 
//more intuitative
// level wise traversal in a tree
//connected componennts and reachability
