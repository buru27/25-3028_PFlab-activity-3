#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int i, x, pcount = 0, fcount = 0;
    float psum = 0, fsum = 0;

    for (i = 0; i < 10; i++) {
        scanf("%d", &x);
        if (x == -1) {
            break;
        }

        if (x >= 5 && x <= 10) {
            pass[pcount] = x;
            psum += x;
            pcount++;
        } else if (x >= 0 && x <= 5) {
            fail[fcount] = x;
            fsum += x;
            fcount++;
        }
    }

    printf("Passed Marks: ");
    for (i = 0; i < pcount; i++) {
        printf("%d ", pass[i]);
    }

    printf("\nFailed Marks: ");
    for (i = 0; i < fcount; i++) {
        printf("%d ", fail[i]);
    }

    if (pcount > 0) {
        printf("\nAverage of pass: %.2f", psum / pcount);
    }

    if (fcount > 0) {
        printf("\nAverage of fail: %.2f", fsum / fcount);
    }

    return 0;
}

