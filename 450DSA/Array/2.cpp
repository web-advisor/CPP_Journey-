// Kth Minimum Maximum Element from an Array 
// Approach : Sort the Array then return (k-1)th position as the smallest and (n-k) as the maximum 
// Alternates : https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array/
             // https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array-set-2-expected-linear-time/
             // https://www.geeksforgeeks.org/kth-smallestlargest-element-unsorted-array-set-3-worst-case-linear-time/


#include<bits/stdc++.h>
using namespace std;
#define ll long long    

void solve();
pair<ll, ll> getMinMax(ll a[], int n,int k);
void merge(ll arr[], int l, int m, int r);
void mergeSort(ll arr[], int l, int r);

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
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
    int n;
    cin >> n;
    ll a[n];
    for(auto &i:a){
        cin >> i;  
    }
    int k;
    cin >> k;
    pair<ll, ll> pp = getMinMax(a, n,k);
    cout << pp.first << " " << pp.second;
}

pair<ll,ll> getMinMax(ll a[],int n,int k){
    mergeSort(a, 0, n-1);
    return make_pair(a[k-1], a[n-k]);
}

void merge(ll arr[], int l, int m, int r)
{
    int i = l;
    int j = m + 1;
    int k = l;

    /* create temp array */
    int temp[5];

    while (i <= m && j <= r)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    /* Copy the remaining elements of first half, if there are any */
    while (i <= m)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of second half, if there are any */
    while (j <= r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    /* Copy the temp array to original array */
    for (int p = l; p <= r; p++)
    {
        arr[p] = temp[p];
    }
}

/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(ll arr[], int l, int r) {
  if (l < r) {
    // find midpoint
    int m = (l + r) / 2;
 
    // recurcive mergesort first and second halves 
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
 
    merge(arr, l, m, r);
  }
}