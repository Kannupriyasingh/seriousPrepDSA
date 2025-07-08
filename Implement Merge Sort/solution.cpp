#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&arr, int left, int mid, int right) {
    
    int n1 = mid - left + 1; // size of left subarray
    int n2 = right - mid; // size of right subarray
    
    vector<int>L(n1), R(n2);
    
    // Copy data to temp arrays
    for(int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for(int i = 0; i < n2; i++){
        R[i] = arr[mid + 1 + i];
    }
    
    int i = 0, j = 0, k = left;
    
    while(i < n1 && j < n2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else if(L[i] > R[j]) {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    
    // Copy any remaining elements of L
    while(i < n1) {
        arr[k] = L[i];
        i++; k++;
    }
    
    // Copy any remaining elements of R
    while(j < n2) {
        arr[k] = R[j];
        j++; k++;
    }
    return;
}

void mergeSort(vector<int>&arr, int left, int right) {
    if(left >= right) {
        return;
    }
    
    int mid = left + (right - left)/2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);
    merge(arr, left, mid, right);
}

int main() {
    // int arr[5] = {9, 5, 14, 2, 3};
    // int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>arr = {9, 5, 14, 2, 3};
    int n = arr.size();
    
    mergeSort(arr, 0, n-1);
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
