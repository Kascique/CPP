/******************************************************************************
*******************************************************************************/

#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int c){
    int low = 0;
    int high = n - 1;
    
    while(low <= high){
        int mid = (low + high) / 2;
        if(c == arr[mid]){
            return mid;
        }else if(c < arr[mid]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int toSearch;
    
    cout << "Enter number to search: ";
    cin >> toSearch;
    
    int arr[] = {12, 45, 2, 23, 2, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = binarySearch(arr, size, toSearch);
    
    if(index != -1){
        cout << toSearch << " found at index " << index << endl;
    }else{
        cout << "Oops not able to find " << toSearch << " in array";
    }

    return 0;
}
