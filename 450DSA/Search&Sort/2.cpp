// Search in a rotated sorted array
// Approach : Search in the array for the value and return the index else return -1 
// Alternates :  https://www.geeksforgeeks.org/search-an-element-in-a-sorted-and-pivoted-array/

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
        cout << endl;
    }
    return 0;
}

void solve(){
    int N;
    cin >> N;
    int *ARR = new int(N);
    for (int i = 0; i < N; i++)
    {
        cin >> ARR[i];
    }
    int D;
    cin>>D;
    int ans;
    ans = searchRotated(ARR, N,D);
    cout<<ans;
}

int searchRotated(int arr[], int n,int d) {
	    for(int i=0;i<n;i++){
	        if(arr[i]==d){
	            return i;
	        }
	    }
        return -1;
}