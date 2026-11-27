#include <stdio.h>
#include <math.h>

// Розв'язок квадратного рівняння a*x^2 + b*x + c = 0
void solve(double a, double b, double c) {
    double d, x1, x2;

    d = b * b - 4 * a * c;

    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("x1 = %lf, x2 = %lf\n", x1, x2);
    } else if (d == 0) {
        x1 = -b / (2 * a);
        printf("x = %lf\n", x1);
    } else {
        printf("Коренів немає\n");
    }
}

int main(void) {
    double a, b, c;

    printf("Введіть a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    solve(a, b, c);

    return 0;
}
