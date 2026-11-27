#include <stdio.h>

int main(void) {
    int n;
    double x, sum = 0, min, max;

    do {
        printf("Enter N (from 7 to 12): ");
        scanf("%d", &n);
    } while (n < 7 || n > 12);

    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%lf", &x);

        sum = sum + x;

        if (i == 1) {
            min = x;
            max = x;
        }
        if (x < min) min = x;
        if (x > max) max = x;
    }

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", sum / n);
    printf("Min = %.2f\n", min);
    printf("Max = %.2f\n", max);

    return 0;
}