// implement binary search in an arry

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int smallestElementUsingInbuiltSortFunction(int arr[], int n) {
    sort(arr, arr+n);
    return arr[0];
}

int smallestElementUsingSingleTraverse(int arr[], int n) {
    int smallestElement = INT_MAX;
    for(int i = 0; i < 5; i++) {
        smallestElement = min(smallestElement, arr[i]);
    }
    return smallestElement;
}

int main() {
    int arr[5] = {9, 5, 14, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ans = smallestElementUsingInbuiltSortFunction(arr, n);
    // int ans = smallestElementUsingSingleTraverse(arr, n);
    
    cout << "Smallest Element of the array is " << ans;
    return 0;
}
