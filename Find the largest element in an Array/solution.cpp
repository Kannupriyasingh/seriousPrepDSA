#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largestElementUsingInbuiltSortFunction(int arr[], int n) {
    sort(arr, arr+n, greater<int>());
    
    return arr[0];
}

int largestElementUsingSingleTraverse(int arr[], int n) {
    int largestElement = INT_MIN;
    for(int i = 0; i < 5; i++) {
        largestElement = max(largestElement, arr[i]);
    }
    return largestElement;
}

int main() {
    int arr[5] = {9, 5, 14, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // int ans = largestElementUsingInbuiltSortFunction(arr, n);
    int ans = largestElementUsingSingleTraverse(arr, n);
    
    cout << "Largest Element of the array is " << ans;
    return 0;
}
