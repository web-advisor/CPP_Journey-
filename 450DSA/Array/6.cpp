//  Cyclically rotate an array by one 
#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{
    int x;
    x=arr[n-1];             // Store the last element
    for(int i=n-1;i>0;i--){     // Move the Array ELements by one 
        arr[i]=arr[(i-1)];  
    }
    arr[0]=x;                   // Store thr first element as the stored last element
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n;i++){
            cin >> a[i];
        }
        rotate(a, n);
        for (i = 0; i < n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

/*

Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 
void rotate(int arr[], int n,int d)
{
    int helpArr[d];
    for(int i=0;i<d;i++){
        helpArr[i]=arr[i];
    }
    for(int i=0;i<n-d;i++){     
        arr[i]=arr[(i+d)%n];  
    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=helpArr[i];
    }             
}

*/