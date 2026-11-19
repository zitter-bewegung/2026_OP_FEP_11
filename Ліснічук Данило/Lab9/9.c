#include <string.h>
#include <stdio.h>

// Написати програму, яка реалізує введення із консолі прислів’я або афоризму 
// із 7+ слів однією стрічкою, розбиває її на масив окремих слів із зворотнім 
// порядком символів в словах і виводить їх в окремих рядках.
int main(void)
{
    char str[200];
    char words[30][50];
    int count = 0;

    printf("Enter 7 words: ");
    fgets(str, 200, stdin);
    str[strlen(str) - 1] = '\0'; 

    char *word = strtok(str, " ");

    while (word != NULL) {
        strcpy(words[count], word);
        count++;
        word = strtok(NULL, " ");
    }

    if (count < 7) {
        printf("Less then 7\n");
        return 0;
    }

    for (int i = 0; i < count; i++) {
        int len = strlen(words[i]);
        
        for (int j = 0; j < len / 2; j++) {
            
            char tmp = words[i][j];ІІ
            words[i][j] = words[i][len - 1 - j];
            words[i][len - 1 - j] = tmp;
        }

        printf("%s\n", words[i]);
    }

    return 0;
}


// Написати програму, яка реалізує пострічкове введення із консолі списку 
// Вашої групи (улюбленої футбольної команди, будь-якого колективу з 10+ 
// учасників) в форматі Номер-[пробіл]-Прізвище-[пробіл]-Ім’я, а потім 
// 1) підраховує і виводить кількість відмінних (різних) імен та середню 
// довжину прізвищ; 2) формує і виводить в алфавітному порядку список виду 
// Номер-[пробіл]-Ім’я-[пробіл]-Прізвище.
#define N 10

int main(void)І
{
    int num[N];
    char surname[N][100];
    char name[N][100];

    printf("Enter %d people (Number Surname Name):\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d %s %s", &num[i], surname[i], name[i]);
    }

    int different = 0;
    for (int i = 0; i < N; i++) {
        int found = 0;

        for (int j = 0; j < i; j++) {
            if (strcmp(name[i], name[j]) == 0) {
                found = 1;
                break;
            }
        }
        if (found == 0)
            different++;
    }


    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += strlen(surname[i]);
    }

    printf("\nDifferent names: %d\n", different);
    printf("Average surname length: %.2f\n", (float)sum / N);


    char list[N][100];
    for (int i = 0; i < N; i++) {
        sprintf(list[i], "%d %s %s", num[i], name[i], surname[i]);
    }

    char tmp[100];
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (strcmp(strchr(list[j], ' '), strchr(list[j + 1], ' ')) > 0) {
                strcpy(tmp, list[j]);
                strcpy(list[j], list[j + 1]);
                strcpy(list[j + 1], tmp); 
            }
        }
    }

    printf("\nSorted list:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", list[i]);
    }

    return 0;
}


// Написати програму, яка перевіряє на правильність введену із консолі адресу 
// електронної пошти. Правильний формат: префікс@домен1.домен2[.домен3].

//Приклади: 
// 1) правильні – johndeer@gmail.com, ivan.franko@lnu.edu.ua; 
// 2) неправильні – jackdoe@gmail, Іван2020@укр.нет.
int isGood(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

int checkEmail(char *email)
{
    char *at = strchr(email, '@');

    if (at == NULL || at == email || strrchr(email, '@') != at){
        return 0;
    }

    for (char *p = email; p < at; p++) {
        if (!isGood(*p) && *p != '.' && *p != '_' && *p != '-')
            return 0;
    }

    char *domain = at + 1;
    int dots = 0;
    int len = strlen(domain);

    if (len == 0 || domain[0] == '.' || domain[len - 1] == '.')
        return 0;

    for (int i = 0; i < len; i++) {
        if (domain[i] == '.') {
            dots++;
            if (domain[i + 1] == '.') 
                return 0;
        }
        else if (!isGood(domain[i]) && domain[i] != '-') {
            return 0;
        }
    }

    if (dots < 1 || dots > 2)
        return 0;

    return 1;
}

int main(void)
{
    char email[100];

    printf("Enter e-mail: ");
    scanf("%s", email);

    if (checkEmail(email))
        printf("Correct e-mail\n");
    else
        printf("Wrong e-mail\n");

    return 0;
}


