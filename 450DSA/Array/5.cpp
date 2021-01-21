// Union and Intersection of two arrays 
// Return the number of elements in the union and intersection of the two sets
// Approach for Union : Insert the Element of both the arrays into a Set and return the set.size()
// Approach for Intersection : Sort both the arrays and compare same elements of both the arrays    

#include <bits/stdc++.h>
using namespace std;

void solve();
int doUnion(int a[],int b[], int n,int m);
int doIntersection(int a[], int b[], int n, int m);
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
    int n,m;
    cin >> n;
    int a[n],b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int Union=doUnion(a,b, n,m);
    int Intersection = doIntersection(a, b, n, m);
    cout << Union << " " <<Intersection << endl;
}
    

int doUnion(int a[],int b[],int n,int m)
{
    set<int> s(a,a+n);
    for(int i=0;i<m;i++){
        s.insert(b[i]);
    }
    return s.size();
}

int doIntersection (int a[], int b[], int n, int m )
{
    sort(a,a+n);
    sort(b,b+m);
    int i = 0, j = 0;
    // int count=0;
    set<int> s;
    while (i < n && j < m) {
        if (a[i] > b[j]) {
            j++;
        }
        else if (b[j] > a[i]) {
            i++;
        }
        else if(a[i]==b[j]){
            s.insert(a[i]);
            // when both are equal
            // count++;
            i++;
            j++;
        }
    }
    return s.size();
}

