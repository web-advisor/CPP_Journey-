
#include <iostream>
using namespace std;

void solve();
int searchRotated(int arr[], int n,int d);

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