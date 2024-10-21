#include <stdlib.h>

int search (int* arr, int* selected, int n){
    int low = 0;
    int high = n;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] < *selected){
            low = mid + 1;
        }
        else if(arr[mid] > *selected){
            high = mid - 1;
        }
        else if(arr[mid] == *selected){
            return mid;
        }
    }
    return -1;//searched number does not exist
}