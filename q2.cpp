#include <stdio.h>

int main() {
    int a[10];
    int i, num, count = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &num);

    for (i = 0; i < 10; i++) {
        if (a[i] == num) {
            count++;
        }
    }

    if (count == 0) {
        printf("number not found");
    } else {
        printf("number occurred %d times", count);
    }

    return 0;
}

