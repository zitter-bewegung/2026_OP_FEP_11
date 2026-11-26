#include <stdio.h>
#include <string.h>

int main(void) {
    char s[500], *w;
    
    printf("Введіть речення: ");
    fgets(s, sizeof(s), stdin);
    
    w = strtok(s, " \n.,;!?");
    while (w) {
        int n = strlen(w);
        // крок 2 байти — для UTF-8 українських літер
        for (int i = n - 2; i >= 0; i -= 2)
            printf("%c%c", w[i], w[i+1]);
        putchar('\n');
        w = strtok(NULL, " \n.,;!?");
    }
    return 0;
}










#include <stdio.h>
#include <string.h>

struct Person {
    int num;
    char sur[50];
    char name[50];
};

int main(void) {
    struct Person p[50], t;
    int n = 0, i, j;
    char line[200];

    printf("Номер Прізвище Ім'я (Enter — кінець):\n");
    while (fgets(line, sizeof(line), stdin) && line[0] != '\n')
        sscanf(line, "%d %s %s", &p[n].num, p[n].sur, p[n].name), n++;

    // різні імена + середня довжина прізвищ
    int uniq = 0, total = 0;
    char seen[50][50];
    for (i = 0; i < n; i++) {
        total += strlen(p[i].sur);
        for (j = 0; j < uniq && strcmp(seen[j], p[i].name); j++);
        if (j == uniq) strcpy(seen[uniq++], p[i].name);
    }
    printf("\nРізних імен: %d\nСередня довжина прізвища: %.2f\n",
           uniq, (float)total / n);

    // сортування — просто міняємо структури цілком!
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (strcmp(p[i].name, p[j].name) > 0) {
                t = p[i]; p[i] = p[j]; p[j] = t;   // ← весь swap в один рядок
            }

    printf("\nНомер Ім'я Прізвище:\n");
    for (i = 0; i < n; i++)
        printf("%d %s %s\n", p[i].num, p[i].name, p[i].sur);

    return 0;
}












#include <stdio.h>
#include <string.h>

int main(void) {
    char e[100];
    printf("Введіть e-mail: ");
    scanf("%99s", e);

    char *at = strchr(e, '@');
    char *dot = at ? strchr(at, '.') : NULL;

    int ok = at && at != e && dot && dot != at + 1 && dot[1] &&
             !strchr(at + 1, '@') && !strchr(e, ' ') &&
             strchr(dot, '.') && !strstr(e, "..");

    // перевірка, що всі символи — латиниця/цифри/._-
    for (int i = 0; e[i] && ok; i++)
        if (!(e[i] >= 'a' && e[i] <= 'z') && !(e[i] >= 'A' && e[i] <= 'Z') &&
            !(e[i] >= '0' && e[i] <= '9') && e[i] != '.' && e[i] != '_' &&
            e[i] != '-' && e[i] != '@') ok = 0;

    printf(ok ? "Правильно \n" : "Неправильно \n");
    return 0;
}












