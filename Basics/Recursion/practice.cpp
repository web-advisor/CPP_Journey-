#include <bits/stdc++.h>
using namespace std;
int F[100];

void solve();
int power(int m, int n);
double e(int x,int n);
int fib(int n);
void TOH(int n,char A,char B,char C);

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        cout << endl;
        t--;
    }
    return 0;
}


// Solving for m ** n in log N
int power(int m, int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return power((m * m), n / 2);
    else
        return power(m * m, (n - 1) / 2) * m;
}

// Solving for e ** x
double e(int x,int n){
    // O(n**2)
    // static double p=1,f=1;
    // double r;
    // if(n==0) return 1;
    // else{
    //     r=e(x,n-1);
    //     p*=x;
    //     f*=n;
    //     return r+(p/f);
    // }

    // O(n) -> Horner's Rule : 
    static double s=1;
    if(n==0){
        return s;
    }else{
        s=1+x*s/n;
        return e(x,n-1);
    }
}

int fib(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }else{
        if(F[n-2]==-1){
            F[n-2]=fib(n-2);
        }
        if(F[n-1]==-1){
            F[n-1]=fib(n-1);
        }
        return (F[n-1]+F[n-2]);
    }
}


// Tower of Hanoi
void TOH(int n,char A,char B,char C){
    if(n>0){
        TOH(n-1,A,C,B);
        cout<<"\nMove from "<<A<<" to "<<C<<" using "<<B;
        TOH(n-1,B,A,C);
    }
}

// Zigzag Pattern
void pzz(int n){
    if(n>0){
        cout<<n;
        pzz(n-1);
        cout<<n;
        pzz(n-1);
        cout<<n;
    }
} 


void solve()
{
    int n;
    cin >> n;
    // For Fibonacci 
    // for(int i=0;i<n;i++){
    //     F[i]=-1;
    // }
    
    pzz(n);
}