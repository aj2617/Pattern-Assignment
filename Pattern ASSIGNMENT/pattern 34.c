#include <stdio.h>

//This approch is better then the other option

int main() {

   int i,j,n;
   printf("Enter the number of rows: ");
   scanf("%d", &n);

 for (i = 0; i <= n; i++) {


        for (j = i; j < n; j++) {
            printf("%c ", 'A' + n - j - 1);
        }

        printf("\n");
    }

    return 0;
}
