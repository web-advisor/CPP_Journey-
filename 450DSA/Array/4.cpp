// Move all negative elements to end with O(n)
#include <bits/stdc++.h>
using namespace std;

void solve();
void segregateElements(int arr[], int n);
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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    segregateElements(arr, n);
    for (int i = 0; i < n;i++){
        cout << arr[i]<<" " ;
    }
}
    

void segregateElements(int arr[],int n)
{
    // Creating a temp array to store the result
    int temp[n];    
    int j = 0; // index of temp 
    for (int i = 0; i < n ; i++) // Only storing +ve elements in the array
        if (arr[i] >= 0 ) 
            temp[j++] = arr[i]; 
        
    if (j == n || j == 0) // If the Original array only have positive integers then j==n return ..! OR If the original array only contains -ve elements then j==0 return ...  
        return; 
   
    for (int i = 0 ; i < n ; i++) // Only storing -ve elements in the array
        if (arr[i] < 0) 
            temp[j++] = arr[i]; 
  
    // Copying temp array to Original Array 
    memcpy(arr, temp, sizeof(temp));
}

