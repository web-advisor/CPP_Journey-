#include <bits/stdc++.h>
using namespace std;
void solve();
int recursion(int m, int n);

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        cout << endl;
        t--;
    }
    return 0;
}

void solve()
{
    int m, n;
    cin >> m >> n;
    cout << recursion(m, n);
}

int recursion(int m, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return recursion((m * m), n / 2);
    else
        return recursion(m * m, (n - 1) / 2) * m;
}