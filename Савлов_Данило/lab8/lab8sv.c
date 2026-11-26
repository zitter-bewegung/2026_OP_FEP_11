#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Завдання 1: повертає масив з 10 випадкових чисел [0..99]
int *makeRandom(void)
{
    static int a[10];   // static - масив існує і після виходу з функції
    for (int i = 0; i < 10; i++)
        a[i] = rand() % 100;
    return a;
}

// Завдання 2а: вказівник на a[i] або NULL
int *pick(int a[], int i)
{
    if (i < 0 || i >= 10)
        return NULL;    // такого елемента немає
    return &a[i];
}

// Завдання 2б: вказівник на t[r][c] або NULL
int *pick2D(int t[12][12], int r, int c)
{
    if (r < 0 || r >= 12 || c < 0 || c >= 12)
        return NULL;
    return &t[r][c];
}

// Завдання 3: сума мінімального і максимального елементів
int sumMinMax(int a[], int n)
{
    int min = a[0], max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    printf("min = %d, max = %d\n", min, max);
    return min + max;
}

int main(void)
{
    srand(time(NULL));

    printf("Task 1:\n");
    int *list = makeRandom();
    for (int i = 0; i < 10; i++)
        printf("%d ", list[i]);

    printf("\n\nTask 2a:\n");
    printf("list[7] = %d\n", *pick(list, 7));
    if (pick(list, 10) == NULL)
        printf("list[10] -> NULL\n");

    printf("\nTask 2b:\n");
    int t[12][12];
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            t[i][j] = i * j;
    printf("t[6][8] = %d\n", *pick2D(t, 6, 8));
    if (pick2D(t, 5, 12) == NULL)
        printf("t[5][12] -> NULL\n");

    printf("\nTask 3:\n");
    int nums[20];
    for (int i = 0; i < 20; i++) {
        nums[i] = rand() % 100;
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("sum = %d\n", sumMinMax(nums, 20));
    return 0;
}
