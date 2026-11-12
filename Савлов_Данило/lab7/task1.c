#include <stdio.h>
#include <stdbool.h>

/* Функція повертає true, якщо n є простим числом. */
bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }

    /* Перебираємо лише непарні дільники до кореня з n */
    for (int d = 3; d * d <= n; d += 2) {
        if (n % d == 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    int number;

    printf("Введіть ціле число: ");
    scanf("%d", &number);

    if (is_prime(number)) {
        printf("Число %d є простим\n", number);
    } else {
        printf("Число %d не є простим\n", number);
    }

    return 0;
}
