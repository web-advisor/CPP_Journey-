//  Spirally traversing a matrix

#include <bits/stdc++.h>
using namespace std;

void solve();
vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c);
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

vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
{
}