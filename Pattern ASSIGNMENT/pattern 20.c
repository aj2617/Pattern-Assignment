#include <stdio.h>

int main()
 {
    int n;
    printf("Enter line number: ");
    scanf("%d", &n);

    int l,c;
    for( l=1;l<=n; l++)
    {
                 for(c=1; c<=n-1; c++)
                  {
                          if( l == 1 || l == n || c == 1 || c == n-1)
                                    printf("*");
                          else
                                 printf(" ");
                 }
                 printf("\n");

    }

    return 0;
}

