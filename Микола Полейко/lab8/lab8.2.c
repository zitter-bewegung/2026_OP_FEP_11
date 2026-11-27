#include <stdio.h>

// а) Адреса елемента масиву з 10 елементів (або NULL)
int *get_element(int arr[10], int index) {
    if (index < 0 || index > 9) {
        return NULL;
    }
    return &arr[index];
}

// б) Адреса елемента масиву 12 на 12 (або NULL)
int *get_element_2d(int m[12][12], int row, int col) {
    if (row < 0 || row > 11 || col < 0 || col > 11) {
        return NULL;
    }
    return &m[row][col];
}

int main(void) {
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int m[12][12] = {0};  // всі елементи дорівнюють 0
    int index, row, col;
    int *p;

    m[2][5] = 77;  // для перевірки

    printf("Введіть індекс: ");
    scanf("%d", &index);
    p = get_element(arr, index);
    if (p == NULL) {
        printf("Немає такого елемента\n");
    } else {
        printf("Елемент = %d\n", *p);
    }

    printf("Введіть рядок і стовпець: ");
    scanf("%d %d", &row, &col);
    p = get_element_2d(m, row, col);
    if (p == NULL) {
        printf("Немає такого елемента\n");
    } else {
        printf("Елемент = %d\n", *p);
    }

    return 0;
}
