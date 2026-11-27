#include <stdio.h>

// Функція, нуль якої шукаємо: N*x + A
double f(double x, double N, double A) {
    return N * x + A;
}

// Метод половинного ділення на інтервалі від a до b
double half_method(double a, double b, double N, double A) {
    double c;

    while (b - a > 0.001) {
        c = (a + b) / 2;
        if (f(a, N, A) * f(c, N, A) <= 0) {
            b = c;  // корінь у лівій половині
        } else {
            a = c;  // корінь у правій половині
        }
    }
    return (a + b) / 2;
}

int main(void) {
    double N, A, x;

    printf("Введіть Ваш номер в журналі N: ");
    scanf("%lf", &N);
    printf("Введіть Ваш вік A: ");
    scanf("%lf", &A);

    x = half_method(-100, 100, N, A);
    printf("x = %lf\n", x);

    return 0;
}
