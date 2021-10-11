#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int r,c,i,j,mid=1;
    cin>>r;
    cin>>c;

    if(r==c){
        mid=r/2;
        for(i=0;i<r;i++){
            if(i==mid){
                for(j=0;j<c;j++){
                    cout<<"*";
                    cout<<" ";
                }
                cout<<endl;
            }else{
                for(j=0;j<c;j++){
                    if(j==mid){
                        cout<<"* ";
                    }else if(i==0 && j>mid){
                        cout<<"*";
                    }else if(i==(r-1) && j<mid){
                        cout<<"*";
                    }else if(i<mid && j==0){
                        cout<<"*";
                    }else if(i>mid && j==(c-1)){
                        cout<<"*";
                    }else{
                        cout<<" ";
                    }
                    cout<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
