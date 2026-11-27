#include <stdio.h>
#include <stdbool.h>

bool isSimple(int value){
    if(value <= 1){
        return false;
    }

    for(int i = 2; i <= value / 2; i++){
        if(value % i == 0){
            return false;
        }
    }
    return true;
}


int sum(int num){
    int result;

    if(num > 100){
        return 0;
    }

    result = num + sum(num + 1);
    return result;
}


double N = 12;
double A = 18;

double f(double x) {
    return N * x + A;
}

int main() {
    int value = 0;

    printf("Enter your value: ");
    scanf("%d", &value);

    bool result = isSimple(value);

    printf("Your value %s\n", result ? "is Simple" : "isn't Simple");


    int num = 0;

    printf("Enter your list num: ");
    scanf("%d", &num);

    int resultSum = sum(num);

    printf("Your value - %d\n", resultSum);


    double a = -100, b = 100;
    double epsilon = 0.001;
    double c = 0;

    if (f(a) * f(b) >= 0) {
        printf("Not Exist\n");
        return 1;
    }

    while ((b - a) >= epsilon) {
        c = (a + b) / 2.0;

        if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    printf("The root of the equation %g * x + (%g) = 0 is: %g\n", N, A, c);

    return 0;
}
