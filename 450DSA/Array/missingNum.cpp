// Missing Number 
// Out of Numbers 1 to N , N-1 are in the array . Find the Missing Number 
// Summing up N-1 numbers in the Array and Summing up the Original 1 to N 
// The difference is the missing number . 

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, i,sum=0;
    int *arr = new int(n);
    cin >> n;
    
    for (i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    
    cout << (n*(n+1)/2) - sum << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        solve();
    }
    return 0;
}