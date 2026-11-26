#include <stdio.h>
#include <stdlib.h>

//1. Написати функцію для обчислення довжини стрічки, не використовуючи жодних бібліотек, окрім stdio.h.
int myStrlen(const char *s) { //адресу першого елементу, а не копію 
    const char *p = s;   

    while (*p != '\0') {    
        p++;                //p++, то зсуваємо вказівник на наступний символ
    }

    return (int)(p - s);    /* різниця адрес = кількість пройдених символів  */
}

int main(void) {
    char str[100];

    printf("Enter thye string: ");
    fgets(str, sizeof(str), stdin);

    for (char *p = str; *p; p++) {
        if (*p == '\n'){
             *p = '\0'; 
             break; 
            }
    }

    printf("String lengh \"%s\" = %d\n", str, myStrlen(str));
    return 0;
}


//2. Написати функцію з прототипом: int* toPoint(int x, int y).
// Функція повинна виділити вільну пам’ять на два цілочисельні значення
// (використайте malloc з stdlib.h), записати в них координати точки (х, у) і повернути вказівник на проініціалізовану точку.
// В main() створити, вивести точку та вказівник на неї, а потім звільнити виділену пам’ять (використайте free з stdlib.h). 
int* toPoint(int x, int y) {
    int *point = (int *)malloc(2 * sizeof(int)); //malloc виділяє місце під 2 int і повертає адресу початку цієї пам'яті
    
    point[0] = x;  
    point[1] = y; 

    return point;   
}

int main(void) {
    int *p = toPoint(6, 7); //відсилка*

    printf("Point: (%d, %d)\n", p[0], p[1]);        
    printf("Due to *: (%d, %d)\n", *p, *(p + 1));    
    printf("Pointer on point p = %p\n", (void *)p);    
    printf("Adress y (p + 1)     = %p\n", (void *)(p + 1));     
    printf("Adress variable p (&p) = %p\n", (void *)&p); 

    free(p);       //повертаємо пам'ять системі
    p = NULL;      //щоб випадково не звернутись до звільненої пам'яті
    return 0;
}


//3. Написати програму, що виконує прості арифметичні операції.
// Створити чотири функції для додавання, віднімання, множення та
// ділення дійсних чисел. Зберегти вказівники на ці функції у масив
// вказівників. Зчитати з консолі ввід типу 1.28+3.14, розбити на операнди
// і оператор, викликати відповідну функцію з масиву вказівників на операції, вивести результат. 
double add(double a, double b) { 
    return a + b; 
}

double mul(double a, double b) {
     return a * b; 
}

double sub(double a, double b) {
     return a - b; 
}

double divide(double a, double b) {
     return a / b; 
}

int main(void) {
    double (*ops[4])(double, double) = { add, sub, mul, divide };
    const char symbols[4] = { '+', '-', '*', '/' };

    double a, b;
    char op;

    printf("Enter expression (like 1.28+3.14): ");

    if (scanf("%lf %c %lf", &a, &op, &b) != 3) {
        printf("Enter corectly\n");
        return 1;
    }

    int index = -1;
    for (int i = 0; i < 4; i++) {
        if (symbols[i] == op) { 
            index = i; 
            break; 
        }
    }

    if (index == -1) {
        printf("Unundersandable operator '%c'\n", op);
        return 1;
    }

    if (op == '/' && b == 0) {
        printf("You cann`t divide on 0!\n");
        return 1;
    }

    double result = ops[index](a, b);
    printf("%g %c %g = %g\n", a, op, b, result);
    return 0;
}

