// Insertion Sort
// Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands.
// It builds the final sorted array (or list) one item at a time.
// Time Complexity : Best Case -> O(n) ; Average Case -> O(n^2) ; Worst Case -> O(n^2) | Space Complexity : O(1)
// Efficient for (quite) small data sets, much like other quadratic sorting algorithms
// More efficient in practice than most other simple quadratic (i.e., O(n^2)) algorithms such as selection sort or bubble sort

#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n);

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int n;
    cin>>n;
    int myarr[n];
    for(auto &i:myarr){
        cin >> i;
    }
    insertionSort(myarr, n);
    for(auto i:myarr){
        cout << i<<" ";
    }
    return 0;
}

void insertionSort(int arr[],int n){
    int key,j=0;                    
    for (int i = 1; i < n; i++)
    {
        key = arr[i];               // Accessing 2nd Element of Unsorted Array
        j = i - 1;                  // Accessing it's Previous element
        while (j >= 0 && arr[j] > key) // For Ascending : arr[j]>key | For Descending : arr[j]<key
        {                           // If the pair of elements accessed are already sorted then we don't perform swapping        
            arr[j + 1] = arr[j];    
            j=j-1;                  // Keep on Swapping the newest element after comparing with each preceeding element 
        }
        arr[j + 1] = key;           // Replace with the latest swapped element
    }    
}
