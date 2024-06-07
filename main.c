#include <stdio.h>
#include "D:\Users\MSI.HOME-PC\CLionProjects\untitled1\libs\data_structures\bitset\bitset.h"

int countUniqueDivisibleByK(int arr[], size_t size, int k) {
    bitset uniqueSet = bitset_create(31);

    for (size_t i = 0; i < size; i++) {
        if (arr[i] % k == 0) {
            bitset_insert(&uniqueSet, arr[i] / k);
        }
    }

    int uniqueCount = 0;
    for (int i = 0; i <= 31; i++) {
        if (bitset_in(uniqueSet, i)) {
            uniqueCount++;
        }
    }

    return uniqueCount;
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    int uniqueCount = countUniqueDivisibleByK(arr, size, k);

    printf("Number of distinct elements divisible by %d: %d\n", k, uniqueCount);

    return 0;
}