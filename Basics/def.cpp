#include <bits/stdc++.h>
using namespace std;

void solve();

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
}

void solve()
{
    int n, w;
    cin >> n >> w;

    vector<pair<long long, long long>> cheese(n);
    for (long long i = 0; i < n; i++)
    {
        long long a, b;
        cin >> a >> b;
        cheese.push_back(make_pair(a, b));
    }

    sort(cheese.begin(), cheese.end(),greater<pair<long long,long long>>());

    long long amount=0,i=0,deli=0;

    while (i<n && amount<w)
    {
        long long thisCheeseAmount=min(w-amount,cheese[i].second);
        deli+=(thisCheeseAmount*cheese[i].first);

        amount = amount + thisCheeseAmount;
        i++;
    }
    cout<<deli;
}