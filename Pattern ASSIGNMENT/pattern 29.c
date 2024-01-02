
#include <stdio.h>

int main() {
    int n;
    printf("Enter line number: ");
    scanf("%d", &n);

    int l, s, c;

    ///Upper part of the pattern
    for (l = 1; l <= n / 2 + 1; l++) {
        for (c = 1; c <= l; c++)
            printf("*");

        for (s = 1; s <= 2 * (n / 2 + 1 - l); s++)
            printf(" ");

        for (c = 1; c <= l; c++)
            printf("*");

        printf("\n");
    }

    /// Lower part of the pattern
    for (l = n / 2; l >= 1; l--) {
        for (c = 1; c <= l; c++)
            printf("*");

        for (s = 1; s <= 2 * (n / 2 + 1 - l); s++)
            printf(" ");

        for (c = 1; c <= l; c++)
            printf("*");

        printf("\n");
    }

    return 0;
}


