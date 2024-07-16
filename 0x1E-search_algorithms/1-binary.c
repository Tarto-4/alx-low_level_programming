#include "search_algos.h"

int binary_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;
    }

    size_t low = 0;
    size_t high = size - 1;

    while (low <= high) {
        print_array(array, low, high); 

        size_t mid = (low + high) / 2;
        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; 
}


void print_array(int *array, size_t start, size_t end) {
    printf("Searching in array: ");
    for (size_t i = start; i <= end; i++) {
        printf("%d", array[i]);
        if (i < end) {
            printf(", ");
        }
    }
    printf("\n");
}
