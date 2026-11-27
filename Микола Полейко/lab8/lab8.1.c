#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Функція створює масив з 10 випадкових чисел від 0 до 99
// і повертає вказівник на його перший елемент
int *random_array(void) {
    static int arr[10];  // static, щоб масив не зник після виходу з функції
    int i;

    for (i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    return arr;
}

int main(void) {
    int *a;
    int i;

    srand(time(NULL));  // запуск генератора випадкових чисел

    a = random_array();

    printf("Масив: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
