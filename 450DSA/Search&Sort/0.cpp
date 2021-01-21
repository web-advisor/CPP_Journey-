// First and last occurrences of X 
// Approach : Linear search from first to last for searching first occurance and Linear Search from last to first for searching last occurance.

#include<bits/stdc++.h>
using namespace std;

int firstOcccurance(int arr[], int n, int s);
int lastOcccurance(int arr[], int n, int s);

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
        int N, D;
        cin >> N;
        cin >> D;
        int *ARR = new int(N);
        for (int i = 0; i < N; i++)
        {
            cin >> ARR[i];
        }

        int first = firstOcccurance(ARR, N, D);
        int last = lastOcccurance(ARR, N, D);
        cout << first << " ";
        if (first != -1)
            cout << last;
        cout << endl;
    }
    return 0;
}


int firstOcccurance(int arr[],int n,int s){
    for(int i=0;i<n;i++){
        if(arr[i]==s){
            return i;
        }
    }
    return -1;
}

int lastOcccurance(int arr[],int n,int s){
    for(int i=n-1;i>=0;i--){
        if(arr[i]==s){
            return i;
        }
    }
    return -1;
}
