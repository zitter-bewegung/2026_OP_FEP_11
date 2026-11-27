#include <stdio.h>

int main(void) {
    int n;
    int i = 1;
    int sum = 0;

    printf("Enter your number in the journal: ");
    scanf("%d", &n);

    while (i <= 100) {
        if (i != n && i != 33) {
            sum = sum + i;
        }
        i = i + 1;
    }

    printf("Sum = %d\n", sum);
    return 0;
}