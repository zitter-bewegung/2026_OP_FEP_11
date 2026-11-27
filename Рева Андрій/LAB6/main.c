#include <stdio.h>
#include <ctype.h>

int main() {
    
    char sentence[1000];

    printf("=== Task 1: Vowels and Consonants ===\n");
    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    printf("%s\n", sentence);

    for (int i = 0; sentence[i] != '\0'; i++) {
        char tmp = sentence[i];

        if (tmp == '\n') {
            printf("\n");
            continue;
        }

        if ((tmp >= 'a' && tmp <= 'z') || (tmp >= 'A' && tmp <= 'Z')) {
            char tmp_lower = (char)tolower((unsigned char)tmp);

            if (tmp_lower == 'a' || tmp_lower == 'e' || tmp_lower == 'i' ||
                tmp_lower == 'o' || tmp_lower == 'u' || tmp_lower == 'y') {
                printf("This is the Vowel %c\n", tmp_lower);
            } else {
                printf("This is the Consonant %c\n", tmp_lower);
            }
        } else {
            printf("Can't read this symbol\n");
        }
    }

    
    int startNum = 0;
    int result = 0;
    int count = 0;
    unsigned int yourNum = 0;

    printf("\n=== Task 2: Sum of 100 numbers ===\n");
    printf("Enter start value: ");
    scanf("%d", &startNum);

    printf("Enter your number: ");
    scanf("%u", &yourNum);

    while (count < 100) {
        if (startNum != (int)yourNum && startNum != 33) {
            result += startNum;
        }
        startNum++;
        count++;
    }

    printf("Sum: %d\n", result);


    int numberN = 0;
    float num = 0.0f;
    float sum = 0.0f;
    float min = 0.0f;
    float max = 0.0f;

    printf("\n=== Task 3: Min, Max, Sum and Average ===\n");
    do {
        printf("Enter 'N' from 3 to 8: ");
        scanf("%d", &numberN);
    } while (numberN < 3 || numberN > 8);

    for (int i = 1; i <= numberN; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);

        sum += num;

        if (i == 1) {
            min = num;
            max = num;
        } else {
            if (num > max) max = num;
            if (num < min) min = num;
        }
    }

    float average = sum / numberN;

    printf("Sum: %g\n", sum);
    printf("Average: %g\n", average);
    printf("Min: %g\n", min);
    printf("Max: %g\n", max);

    return 0;
}
