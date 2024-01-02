#include <stdio.h>

int main() {
    int n;
    printf("Enter line number: ");
    scanf("%d", &n);

        int l, s, c;
        for(l=1;l<=n;l++){
        for(c=l;c>0; c--)
        printf("%c ",     'A' +n -c  );

printf("\n");
      }



    return 0;
}

