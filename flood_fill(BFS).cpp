#include <bits/stdc++.h>
#define Code_Delete_Koren_Shomossha_hobe ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define F first
#define S second
using namespace std;

int visited[1000][1000];

void solve()
{
    int n;
    cin>> n;
    int a[n+1][n+1];// n sqaure sized
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>> a[i][j];
        }
    }
    int x, y;// which row and column
    cin>> x>> y;
    int k;// which number 
    cin>> k;

    queue< pair< int , int >> q;

    q.push({x, y});

  //we can also use vector of pairs to store the row or column and if there are multiple queary then
  // everytime just clean the visited matrix and process is same everytime 

    while(!q.empty())
    {
        x= q.front().F;
        y= q.front().S;

        q.pop();

        //taking all the adjacant index 
      
        if(x-1>=1 && a[x][y]==a[x-1][y] && visited[x-1][y]==0)q.push({x-1, y});
        if(x+1<=n && a[x][y]==a[x+1][y] && visited[x+1][y]==0)q.push({x+1, y});
        if(y-1>=1 && a[x][y]==a[x][y-1] && visited[x][y-1]==0)q.push({x, y-1});
        if(y+1<=n && a[x][y]==a[x][y+1] && visited[x][y+1]==0)q.push({x, y+1});

        if(visited[x][y]==0)
        {
            visited[x][y]=1;
            a[x][y]=k;
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<< a[i][j]<< " ";
        }
        cout<< endl;
    }
}

int main()
{
    Code_Delete_Koren_Shomossha_hobe
    solve();
}
