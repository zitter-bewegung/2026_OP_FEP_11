#include <stdio.h>

// Функція повертає 1, якщо число просте, і 0, якщо ні
int is_prime(int n) {
    int i;

    if (n < 2) {
        return 0;
    }
    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int num;

    printf("Введіть число: ");
    scanf("%d", &num);

    if (is_prime(num) == 1) {
        printf("Число просте\n");
    } else {
        printf("Число не просте\n");
    }

    return 0;
}
