// Bubble Sort
// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.
// It is known as bubble sort, because with every complete iteration the largest element bubbles up towards the last place or the highest index just like a water bubble rises up to the water surface.
// Time Complexity : Best Case -> O(n) ; Average Case -> O(n^2) ; Worst Case -> O(n^2) | Space Complexity : O(1)
// Efficient for small data sets, much like other quadratic sorting algorithms

#include <bits/stdc++.h>
using namespace std;

void bubbleSortOptimized(int arr[], int n);
void bubbleSort(int arr[], int n);

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int myarr[n];
    for (auto &i : myarr)
    {
        cin >> i;
    }
    bubbleSort(myarr, n);
    for (auto i : myarr)
    {
        cout << i << " ";
    }
    cout << endl;
    bubbleSortOptimized(myarr, n);
    for (auto i : myarr)
    {
        cout << i << " ";
    }
    return 0;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)                 // Accessing elements from the strt one by one 
    {
        for (int j = 0; j < (n - i - 1); j++)   // Accessing only till the unsorted elements of the array . Sorted elements not touched 
        {
            if (arr[j] > arr[j + 1])            // Ascending : arr[j] > arr[j+1] | Descending : arr[j] < arr[j + 1] 
            {   // Swapping if the pair, not in order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// For a Optimized approach to Bubble Sort We will Keep a track also . This will save our steps if the Array is already sorted , thus making Time Complexity of Best Case as O(n)
void bubbleSortOptimized(int arr[], int n){
    bool flag;
    for (int i = 0; i < n; i++)                 // Accessing elements from the strt one by one 
    {
        flag = false;
        for (int j = 0; j < (n - i - 1); j++)   // Accessing only till the unsorted elements of the array . Sorted elements not touched 
        {
            if (arr[j] > arr[j + 1])            // Ascending : arr[j] > arr[j+1] | Descending : arr[j] < arr[j + 1] 
            {
                flag = true;
                // Swapping if the pair, not in order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if(flag==false){
            break;
        }
    }
}
