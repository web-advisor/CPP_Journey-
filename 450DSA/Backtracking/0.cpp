
#include <bits/stdc++.h>
#define MAX 5
using namespace std;

void solve();
vector<string> findPath(int m[MAX][MAX], int n);
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
}

vector<string> findPath(int m[MAX][MAX], int n) {
    // Your code goes here
}