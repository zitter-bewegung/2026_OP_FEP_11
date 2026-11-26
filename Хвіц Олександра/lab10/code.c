#include <stdio.h>

int main() {
    char s[100], *p = s;
    printf("Enter string: ");
    scanf("%99[^\n]", s);
    while (*p) p++;
    printf("Length = %d\n", p - s);
    return 0;
}








#include <stdio.h>
#include <stdlib.h>

int* toPoint(int x, int y) {
    int *p = malloc(2 * sizeof(int));
    p[0] = x;
    p[1] = y;
    return p;
}

int main() {
    int *p = toPoint(3, 7);
    printf("(%d, %d)\n", p[0], p[1]);
    free(p);
    return 0;
}











#include <stdio.h>

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) { return a / b; }

int main() {
    float (*ops[4])(float, float) = { add, sub, mul, div };
    char op;
    float a, b;

    printf("Введіть вираз (наприклад 1.28+3.14): ");
    scanf("%f %c %f", &a, &op, &b);

    int i;
    if (op == '+') i = 0;
    else if (op == '-') i = 1;
    else if (op == '*') i = 2;
    else i = 3;

    printf("Результат = %.2f\n", ops[i](a, b));
    return 0;
}
