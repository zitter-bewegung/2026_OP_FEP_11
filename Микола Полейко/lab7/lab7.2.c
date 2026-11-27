#include <stdio.h>

// Рекурсивна функція: сума чисел від n до 100
int sum(int n) {
    if (n > 100) {
        return 0;
    }
    return n + sum(n + 1);
}

int main(void) {
    int N;

    printf("Введіть Ваш номер в журналі: ");
    scanf("%d", &N);

    printf("Сума від %d до 100 = %d\n", N, sum(N));

    return 0;
}
