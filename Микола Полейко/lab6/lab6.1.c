#include <stdio.h>

int main(void) {
    char text[200];
    int vowels = 0;
    int consonants = 0;

    printf("Enter a sentence: ");
    fgets(text, 200, stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {
            vowels++;
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}