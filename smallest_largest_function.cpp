#include <iostream>

using namespace std;

int largeNum(int num_arr[], int size){
    int largest = num_arr[0];
    for(int x = 0; x < size; x++){
        if(num_arr[x] > largest){
            largest = num_arr[x];
        }
    }
    return largest;
}

int smallNum(int num_arr[], int size){
    int largest = num_arr[0];
    for(int x = 0; x < size; x++){
        if(num_arr[x] < largest){
            largest = num_arr[x];
        }
    }
    return largest;
}

int main()
{
    int num_arr[] = {12, 343, 45, 67};
    int size = sizeof(num_arr)/ sizeof(num_arr[0]);
    int largestNum = largeNum(num_arr, size);
    int smallestNum = smallNum(num_arr, size);
    cout << "Largest Number: " << largestNum << endl;
    cout << "Smallest Number: " << smallestNum;
    return 0;
}
