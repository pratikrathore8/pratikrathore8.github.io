#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printArray(int* arr, int num_el);
void swap(int* a, int* b);
int partition(int* arr, int low, int high);
void quickSort(int* arr, int low, int high);

int main(){
    int arr_len = 10;
    int* arr = (int*) malloc(sizeof(int) * arr_len);

    srand(time(NULL)); // Change the seeding

    for(int i = 0; i < arr_len; i++) {
        arr[i] = rand() % 100;
    }

    printArray(arr, arr_len);

    quickSort(arr, 0, arr_len - 1);

    printArray(arr, arr_len);
}

void printArray(int* arr, int num_el){
    printf("Array: [");
    for (int i = 0; i < num_el; i++)
    {
        printf("%d", arr[i]);
        if (i < num_el - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}

// Swap elements of the array in-place
void swap(int* a, int* b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

// Sort array so that pivot is in the correct position in sorted array
// All elements to the left of the pivot will be less than or equal to the pivot
// All elements to the right will be greater than or equal to the pivot
int partition(int *arr, int low, int high){
    int pivot = arr[high]; // Pivot is rightmost element
    int i = low - 1; // Position used for swapping

    for(int j = low; j <= high - 1; j++) {
        // Move all elements less than the pivot to the left of the eventual pivot location
        if(arr[j] < pivot) {
            i++; // Move the position to swap into one spot to the right
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]); // Move the pivot to its final sorted location
    return (i + 1);
}

// Sort the elements of the array in increasing order
// Sorting is performed in-place
// low is the leftmost index of the array to be sorted, high is the rightmost
void quickSort(int* arr, int low, int high){
    // Notice that the base case is not explicitly stated
    // The base case is when low >= high (i.e. a subarray containing a single element), in which case the function does nothing
    
    if(low < high) {
        int pivot_ind = partition(arr, low, high);

        // The pivot is in its final position after calling partition()
        // All elements to the left of the pivot will be less than or equal to the pivot
        // All elements to the right will be greater than or equal to the pivot
        // Thus we can call the function recursively to sort the two halves of the array
        quickSort(arr, low, pivot_ind - 1);
        quickSort(arr, pivot_ind + 1, high);
    }
}