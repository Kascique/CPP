// Example program
#include <iostream>
#include <string>

using namespace std;


void heapIf(int num_arr[], int size, int n){
    
    int largest = n;
    int leftChild = 2 * n + 1;
    int rightChild = 2 * n + 2;
    
    if(leftChild < size && num_arr[leftChild] > num_arr[largest]){
      largest = leftChild;    
    }
    
    if(rightChild < size && num_arr[rightChild] > num_arr[largest]){
      largest = rightChild;    
    }
    
    if(largest != n){
      swap(num_arr[n], num_arr[largest]);
      heapIf(num_arr, size, largest);
    }
}

void heapSort(int num_arr[], int s){
     for(int c = s / 2 - 1; c >= 0; c--){
         heapIf(num_arr, s, c);
     }
     
     for(int c = s - 1; c >= 0; c--){    
        swap(num_arr[0], num_arr[c]);  
        heapIf(num_arr, c, 0);
     }
}

void printArray(int num_arr[], int n){
    for(int c = 0; c < n;  c++){
        cout << num_arr[c] << " ";
    }   
    cout << "\n";
}

int main()
{
  cout << "Heap Sort" << "\n";
  int num_arr[] = {12, 33, 10, 45, 3, 15};
  int size = sizeof(num_arr)/ sizeof(num_arr[0]);
  
  heapSort(num_arr, size);
  cout << "Sorting completed \n";
  printArray(num_arr, size);
  
}
