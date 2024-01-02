#include <stdio.h>
int main() {
    int n, c = 1, s, l, j;


    printf("Input number of rows: ");
    scanf("%d", &n);


    for (l = 0; l< n; l++) {

        for (s = 1; s<= n - l; s++)
            printf("  ");

        for (j = 0; j <= l; j++) {
            if (j == 0 || l == 0)
                c = 1;
            else
                c = c * (l - j + 1) / j;
            printf("%4d", c);
        }

        printf("\n");
    }

    return 0;
}
