#include <stdio.h>
#include <stdlib.h>
  
void countingSort(int arr[], int size) {
    int max = arr[0], min = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    int range = max - min + 1;

    int *count = (int *)calloc(range, sizeof(int));
    if (count == NULL) {
        printf("Memory allocation failed.");
        return;
    }

    for (int i = 0; i < size; i++) {
        count[arr[i] - min]++;
    }

    for (int i = 1; i < range; i++) {
        count[i] += count[i - 1];
    }
    int *output = (int *)malloc(size * sizeof(int));
    if (output == NULL) {
        printf("Memory allocation failed.");
        return;
    }

   
    for (int i = size - 1; i >= 0; i--) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }

    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }

    
    free(count);
    free(output);
}

int main() {
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    countingSort(arr, size);

    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
     int m= 3;
    
    printf("%d",arr[m-1]); 
    return 0;
}
