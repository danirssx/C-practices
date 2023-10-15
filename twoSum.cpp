#include <stdio.h>

const int size = 5;
const int target = 6;

void printNumbers(int *arr, int length, int target) {
    int actual = 0;

    for (int i = 0; i < length; i++) {
        actual = arr[i];
        for(int j = 0; j < length; j++) {
            if (actual + j == target) {
                printf("%d + %d = %d\n", actual, j, (actual + j));
                printf("Indexes: [%d, %d]\n", i, (j-1));
            } else {
                printf("No: %d\n", actual + j);
            }
        }
    };

    // printf("%d", arr[0]);
};

int main() {
    int numbers[size] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);


    printNumbers(numbers, length, target);
    return 0;
};