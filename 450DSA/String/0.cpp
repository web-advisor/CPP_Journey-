// Problem : Reverse An Array 
// Approach : Access the first half of the entered array and Swap the first half with the second half .
// Modification : Make it enable to reverse text arrays also or any type of string...
// Difficulty : Unable to dynamically identify typeof entered data and use it's type to use function template 

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    char *arr = new char(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int start, end;
    start = 0;
    end = n - 1;
    for (int i = 0; i < int(n / 2); i++)
    {
        arr[start] = arr[start] + arr[end];
        arr[end] = arr[start] - arr[end];
        arr[start] = arr[start] - arr[end];
        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

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
}