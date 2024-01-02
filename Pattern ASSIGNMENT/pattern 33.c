#include <stdio.h>

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);
    int l, c;
    char k = 'A';


    for (l = 1; l <= n; l++) {
        for (c = 1; c <= l; c++) {
            if ((c + l) % 2 == 0)
             {
               printf("%c ", k + ('a' - 'A')); /* [ k+(a-A) =>  A+a-A  => 65+97-65  = 97 =a ] */

            } else {

                printf("%c ", k);
            }
            k++;
        }
        printf("\n");
    }

    return 0;
}
