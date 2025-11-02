#include <stdio.h>

int main() {
    int a[5];
    int i, last;

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    last = a[4];
    for (i = 4; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = last;

    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

