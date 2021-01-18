// Problem : Sort an Aray of 0,1 and 2
// Approach : Dutch National Flag Problem Approach --> https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/ 

#include <bits/stdc++.h>
using namespace std;



template <typename T>
void sort012(T a[], int arr_size) 
{ 
    int lo = 0; 
    int hi = arr_size - 1; 
    int mid = 0; 
  
    while (mid <= hi) { 
        switch (a[mid]) { 
  
        case 0:
            a[lo] = a[lo] + a[mid];
            a[mid] = a[lo] - a[mid];
            a[lo] = a[lo] - a[mid];
            lo++;
            mid++;
            break; 
  
        // If the element is 1 . 
        case 1: 
            mid++; 
            break; 
  
        // If the element is 2 
        case 2:
            a[mid] = a[mid] - a[hi];
            a[hi] = a[mid] - a[hi];
            a[mid] = a[mid] - a[hi];
            hi--;
            break; 
        } 
    } 
} 

template <typename T>
void solve()
{
    int n;
    cin >> n;
    T *arr = new T(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort012(arr, n);
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
        solve<int>();
        cout << endl;
    }
}