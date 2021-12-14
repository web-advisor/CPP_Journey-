#include <bits/stdc++.h>
using namespace std;

void solve();

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
    char first, second, third;
    char x,y;
    char chosen;
    cin>>first>>second>>third>>x>>y;
    if(x==first || y==first){
        chosen=first;
    }else if(x==second || y==second){
        chosen=second;
    }else if(x==third || y==third){
        chosen=x;
    }
    cout<<chosen;
    return;
}
