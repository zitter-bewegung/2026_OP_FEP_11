#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Знаходить максимум, мінімум і суму елементів масиву з n чисел
// Результати записуються через вказівники
void find(int arr[], int n, int *max, int *min, int *sum) {
    int i;

    *max = arr[0];
    *min = arr[0];
    *sum = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
        *sum = *sum + arr[i];
    }
}

int main(void) {
    int arr[20];
    int i;
    int max, min, sum;

    srand(time(NULL));

    for (i = 0; i < 20; i++) {
        arr[i] = rand() % 100;
    }

    printf("Масив: ");
    for (i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    find(arr, 20, &max, &min, &sum);

    printf("Максимум = %d\n", max);
    printf("Мінімум = %d\n", min);
    printf("Сума = %d\n", sum);

    return 0;
}
