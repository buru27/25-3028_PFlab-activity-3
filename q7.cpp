#include <stdio.h>

int main() {
    int a[10];
    int i, j;

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    i = 0;
    while (i < 10) {
        j = i + 1;
        while (j < 10) {
            if (a[i] == a[j]) {
                a[j] = -1;
            }
            j++;
        }
        i++;
    }

    for (i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

