#include <stdio.h>
#include <math.h>

/* Ліва частина рівняння: N*x + A */
double equation(double x, double n, double a) {
    return n * x + a;
}

/* Метод половинного ділення на відрізку [left, right].
   Повертає наближене значення кореня. */
double bisection(double left, double right, double eps, double n, double a) {
    double middle = left;

    while (right - left > eps) {
        middle = (left + right) / 2.0;
        double f_middle = equation(middle, n, a);

        if (f_middle == 0.0) {
            return middle;
        }

        /* Корінь лежить там, де функція змінює знак */
        if (equation(left, n, a) * f_middle < 0) {
            right = middle;
        } else {
            left = middle;
        }
    }
    return (left + right) / 2.0;
}

int main(void) {
    double n, a;
    const double left = -100.0, right = 100.0;
    const double eps = 0.001;

    printf("Введіть N (номер у журналі): ");
    scanf("%lf", &n);
    printf("Введіть A (вік у повних роках): ");
    scanf("%lf", &a);

    /* Перевірка: на кінцях відрізка знаки мають бути різні */
    if (equation(left, n, a) * equation(right, n, a) > 0) {
        printf("На відрізку [%g; %g] розв'язку немає\n", left, right);
        return 1;
    }

    double root = bisection(left, right, eps, n, a);
    printf("Розв'язок рівняння %g*x + %g = 0: x = %.3f\n", n, a, root);

    return 0;
}
