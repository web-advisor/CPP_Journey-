// square root of an integer
// Approach : sqrt() of MATH.H
// Alternates : https://www.geeksforgeeks.org/square-root-of-an-integer/
#include <bits/stdc++.h>
using namespace std;

void solve();
long long int floorSqrt(long long int x);
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

void solve(){
    long long int D;
    cin>>D;
    cout<<floorSqrt(D);
}

long long int floorSqrt(long long int x) 
{
    return (int)sqrt(x);
}