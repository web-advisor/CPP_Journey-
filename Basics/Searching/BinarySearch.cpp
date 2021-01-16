// Interval Search :Searches in sorted data structures . more Efficient . Repeatedly target the center of the search structure and divide the space in Half
// Disadvantage : Needs a sorted array , harder to work with when repeatition is there 

#include <bits/stdc++.h>
using namespace std;

void solve();
int binarySearch(int a[], int, int, int);

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

void solve()
{
    int n, find;
    int *arr = new int(n);
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> find;
    int output = binarySearch(arr, 0, n, find);
    cout << output;
}

int binarySearch(int a[], int left, int right, int find)
{
    int mid;
    while (left <= right)
    {                                       // If left-limit index is greater than right-limit index then we have exhausted all options
        mid = left + (right - left) / 2;    // finding middle index (rounding off)
        if (a[mid] == find)                 // middle element checked therefore we won't consider it while changing limits
            return mid + 1;                 // Element if found would be middle element
        else if (a[mid] < find)             // Reqd element greater than therefore 2nd half is potential
            left = mid + 1;                 // Updating left-limit to be next of middle element ...right-limit remains constant
        else                                // Reqd element lesser than the middle element therefore 1st half is potential
            right = mid - 1;                // Updating right-limit to be previous of middle element ... left-limit remains constant
    }
    return -1;
}
