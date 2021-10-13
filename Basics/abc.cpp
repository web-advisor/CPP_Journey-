#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n,coef;
    cin>>n;

    cout<<"Pascal's Triangle :  "<<endl;
    for(int i=1;i<=n;i++){
        coef=1;
        for(int k=n-i;k>0;k--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<coef<<" ";
            coef=coef*(i-j)/j;
        }
        cout<<endl;
    }

    return 0;   
}