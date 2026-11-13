лаб 7
1 програма

#include <stdio.h>

int main(void) {
    int n, prime = 1;

    printf("Введіть число: ");
    scanf("%d", &n);

    if (n < 2) prime = 0;
    for (int d = 2; d < n; d++) {
        if (n % d == 0) prime = 0;
    }

    if (prime) printf("Просте\n");
    else printf("Не просте\n");

    return 0;
}e



2 програма

#include <stdio.h>

int suma(int n) {
    if (n > 100) return 0;
    return n + suma(n + 1);
}

int main(void) {
    int N;

    printf("Введіть ваш порядковий номер: ");
    scanf("%d", &N);

    printf("Сума: %d\n", suma(N));
    return 0;
}



3 програма

#include <stdio.h>

double N, A;

double f(double x) {
    return N * x + A;
}

int main(void) {
    double a = -100, b = 100, c;

    printf("Введіть N: ");
    scanf("%lf", &N);
    printf("Введіть вік A: ");
    scanf("%lf", &A);

    for (int i = 0; i < 100; i++) {
        c = (a + b) / 2;
        if (f(a) * f(c) <= 0)
            b = c;
        else
            a = c;
    }

    printf("Розв'язок x ≈ %.4f\n", (a + b) / 2);
    return 0;
}
