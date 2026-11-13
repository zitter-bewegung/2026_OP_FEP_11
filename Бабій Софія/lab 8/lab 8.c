лаб 8

завд1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int arr[10];

    srand(time(NULL));

    for (int i = 0; i < 10; i++)
        arr[i] = rand() % 100;

    printf("Масив: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}



завд2

#include <stdio.h>

int main(void)
{
    int arr[10] = {5, 12, 7, 33, 8, 91, 14, 60, 2, 47};
    int index;

    printf("Введи індекс від 0 до 9: ");
    scanf("%d", &index);

    if (index >= 0 && index < 10) {
        int *p = &arr[index];
        printf("Адреса: %p\n", (void *)p);
        printf("Значення: %d\n", *p);
    } else {
        printf("NULL (елемента немає)\n");
    }

    return 0;
}



завд3


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int arr[20];
    int max, min;

    for (int i = 0; i < 20; i++)
        arr[i] = rand() % 100;

    max = arr[0];
    min = arr[0];

    for (int i = 1; i < 20; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Максимум: %d\n", max);
    printf("Мінімум: %d\n", min);
    printf("Сума: %d\n", max + min);

    return 0;
}
