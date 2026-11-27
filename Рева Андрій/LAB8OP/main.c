#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define SIZE12 12
#define SIZE20 20

int randomValue() {
    return rand() % 100;
}

void setArray(int mas[], int n) {
    for (int i = 0; i < n; i++) {
        mas[i] = randomValue();
    }
}

void printArray(int mas[]) {
    for (int i = 0; i < SIZE; i++) {
        printf("[%d] = %d\n", i, mas[i]);
    }
}

int *getAdressFromArray(int mas[], int element) {
    return &mas[element];
}

int *getAdressFromArray12x12(int mas[][SIZE12], int row, int col) {
    if (row < 0 || row >= SIZE12 || col < 0 || col >= SIZE12) {
        return NULL;
    }
    return &mas[row][col];
}

void searchElement(int mas[], int *sum, int *min, int *max) {
    *min = mas[0];
    *max = mas[0];
    *sum = 0;

    for (int i = 0; i < SIZE20; i++) {
        *sum += mas[i];
        if (mas[i] < *min) *min = mas[i];
        if (mas[i] > *max) *max = mas[i];
    }
}

int main() {
    srand(time(NULL));

    int mas[SIZE];
    setArray(mas, SIZE);
    printArray(mas);

    int mas12x12[SIZE12][SIZE12] = {0};
    printf("1D: %p\n", (void *)getAdressFromArray(mas, 5));
    printf("2D: %p\n", (void *)getAdressFromArray12x12(mas12x12, 5, 7));

    int mas20[SIZE20], sum, min, max;
    setArray(mas20, SIZE20);
    searchElement(mas20, &sum, &min, &max);
    printf("Min: %d, Max: %d, Sum: %d\n", min, max, sum);

    return 0;
}
