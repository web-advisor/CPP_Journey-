// Sequential Search : List or array is traversed sequentially and every elmt is checked .
#include <bits/stdc++.h>
using namespace std;

void solve();
void linearSearch(int a[],int,int);

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

void solve(){
    int n,find;
    int *arr = new int(n);
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> find;
    linearSearch(arr,n, find);
}

void linearSearch(int a[],int n,int find){
    int temp = -1;
    for (int i = 0; i < n;i++){
        if(a[i]==find){
            cout << i + 1;
            temp = 0;
        }
    }
    if(temp==-1){
        cout << -1;
    }
}
