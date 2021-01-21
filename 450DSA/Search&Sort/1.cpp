// Find a Fixed Point (Value equal to index) in a given array
// Approach : Linear search for any instance where index == position and if found keep on pushing such fixed points to the vector ; if none found pushback 0 and return the vector

#include<bits/stdc++.h>
using namespace std;

void solve();
vector<int> valueEqualToIndex(int arr[], int n);

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
    vector<int> ans;
    ans = valueEqualToIndex(ARR, N);
    for(int x:ans){
        cout << x << " ";
    }
}

vector<int> valueEqualToIndex(int arr[], int n) {
	    vector<int> vec;
	    for(int i=0;i<n;i++){
	        if(arr[i]==i+1){
	            vec.push_back(arr[i]);
	        }
	    }
        if(vec.empty())
            vec.push_back(0);
        return vec;
	}