#include <stdio.h>

int main() {
    char str[100];
    int i, v = 0, c = 0;

    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + 32;
            }

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                v++;
            } else {
                c++;
            }
        }
    }

    printf("Vowels = %d\nConsonants = %d", v, c);

    return 0;
}

