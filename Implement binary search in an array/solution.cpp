// implement binary search in an arry

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int size, int arr[], int target) {
    int f = 0, l = size-1;
    
    while(f <= l) {
        int mid = (l+f)/2;
        if(arr[mid] == target) {
            cout << "Target item present in array";
            return true;
        }
        else if(arr[mid] < target) {
            f = mid + 1;
        }
        else {
            l = mid - 1;
        }
    }
    cout << "Target item NOT present in array" << endl;
    return false;
}

int main() {
    // int size;
    // cout << "Input the size of array: ";
    // cin >> size;
    // int arr[size];
    // cout << "Input the array items in increasing order: ";
    // for(int i = 0; i < size; i++) {
    //     int item;
    //     cin >> item;
    //     arr[i] = item;
    // }
    // cout << "Array items: ";
    // for(int i = 0; i < size; i++) {
    //     cout << arr[i] << " ";
    // }
    
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int target;
    cout << "Enter the item which you want to search: ";
    cin >> target;
    
    // bool isPresent = binarySearch(size, arr, target);
    bool isPresent = binarySearch(10, arr, target);

    return 0;
    
}
