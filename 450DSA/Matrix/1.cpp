// Search an element in a matrix : Using normal Traversal and Linear Search
// Search in a Sorted Matrix : Starting with top-right or Left-bottom so that only one direction to move for increasing order. 

#include <bits/stdc++.h>
using namespace std;

void solve();
int matSearch(vector<vector<int>> &mat, int N, int M, int X);

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}

void solve()
{
    int n, m;
    cin >> n;
    cin >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int x;
    cin >> x;
    int res=matSearch(a, n, m, x);
    cout << res ;
}

int matSearch(vector<vector<int>> &mat, int N, int M, int X)
{
    int r = 0, c = M - 1;
    while(r<N && c>=0){
        if(mat[r][c]==X)
            return 1;
        if(mat[r][c]>X){
            c--;
        }else{
            r++;
        }
    }
    return 0;
}
