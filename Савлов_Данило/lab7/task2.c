#include <stdio.h>

#define UPPER_LIMIT 100

/* Рекурсивно рахує суму всіх цілих чисел від from до to включно.
   Рекурсія іде від верхньої межі вниз. */
long sum_range(int from, int to) {
    if (to < from) {
        return 0;
    }
    return to + sum_range(from, to - 1);
}

int main(void) {
    int journal_number;

    printf("Введіть свій номер у журналі: ");
    scanf("%d", &journal_number);

    long total = sum_range(journal_number, UPPER_LIMIT);

    printf("Сума чисел від %d до %d = %ld\n", journal_number, UPPER_LIMIT, total);

    return 0;
}
