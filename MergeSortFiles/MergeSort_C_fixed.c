#include <stdio.h>
#include <stdlib.h>

int *merge(int array[], int beg, int mid, int end){
    //int beg is the beginning index of the array
    //int mid is the middle index of the array
    //int end is the last index of the array

    int i, j, k;
    //int i, j, k is initializing what I'll use for indexes later
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    //create temporary arrays
    int Left[n1], Right[n2];

    //put data into the temporary arrays
    for (i = 0; i < n1; i++)
        Left[i] = array[beg + i];
    for (j = 0; j < n2; j++)
        Right[j] = array[mid + 1 + j];

    i = 0; //initial index for the left subarray
    j = 0; //initial index for the right subarray
    k = beg; //initial index for the total subarray

    while (i < n1 && j < n2){
        if (Left[i] <= Right[j]){
            array[k] = Left[i];
            i++;
        }
        else{
            array[k] = Right[j];
            j++;
        }
        k++;
    }
    return array;
}

void mergesort(int array[], int beg, int end){
    if (beg < end){
        int mid = (beg + (end -1))/2;
        mergesort(array, beg, mid);
        mergesort(array, mid + 1, end);

        merge(array, beg, mid, end);
    }
}
