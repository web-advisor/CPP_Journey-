// Selection Sort
// In-Place Comparison sort algo
// Time Complexity : Best Case -> O(n^2) ; Average Case -> O(n^2) ; Worst Case -> O(n^2) | Space Complexity : O(1)
// The algorithm divides the input list into two parts: the sublist of items already sorted, which is built up from left to right at the front (left) of the list, and the sublist of items remaining to be sorted that occupy the rest of the list.
// Initially, the sorted sublist is empty and the unsorted sublist is the entire input list. The algorithm proceeds by finding the smallest (or largest, depending on sorting order) element in the unsorted sublist, exchanging (swapping) it with the leftmost unsorted element (putting it in sorted order), and moving the sublist boundaries one element to the right.

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n);

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
    selectionSort(myarr, n);
    for (auto i : myarr)
    {
        cout << i << " ";
    }
    return 0;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = i; //  initialising min
        for (int j = i + 1; j < n; j++)
        { // Finding the minimum from unsorteed part of the array
            if (arr[j] < arr[min])
            { // Comparator !!! Cindition for ascending : (arr[j]<arr[min]) Condition for descending : (arr[j]>arr[min])
                min = j;
            }
        }
        if (min != i)
        { // if original min is changed then ,,, Swap the minimum value found & the orignal min value
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}
