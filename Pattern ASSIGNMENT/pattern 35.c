#include <stdio.h>

int main() {
    int n;
    printf("Enter line number: ");
    scanf("%d", &n);  ///[pattern may be miss behave if n>9.please enter n<=9]

    int l, s, c;

    for (l = 1; l <= n ; l++) {
        for (c = 1; c <= l; c++)
            printf("%d",c);

        for (s = 1; s <= 2 * (n - l); s++)
            printf(" ");

        for (c = l; c >= 1; c--)
            printf("%d",c);

        printf("\n");
    }



    return 0;
}

