#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>&arr, int left, int right) { 
    int pivot = arr[right];
    int i = left-1;
    
    for(int j = left; j < right; j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    // Move pivot after smaller elements and
    // return its position
    swap(arr[i + 1], arr[right]);  
    return i + 1;
}

void quickSort(vector<int>&arr, int left, int right) {
    if(left < right) {
        
        // funciton to find the index of pivot
        int pivot = partition(arr, left, right);
        
        quickSort(arr, left, pivot-1);
        quickSort(arr, pivot+1, right);
    }
}

int main() {
    vector<int>arr = {5, 4, 3, 2, 1};
    int n = arr.size();
    
    quickSort(arr, 0, n-1);
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

