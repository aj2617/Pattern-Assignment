
#include<stdio.h>
int main()
{
         int n;
         printf(" Enter line number :");
         scanf("%d",&n);
         int sum=1;       int l,c;
   for( l=1; l<=n; l++)
        {
            for( c=1; c<=l; c++)
                  {
                        printf("%2d ", sum);

                        sum++;}

                        printf("\n");
                   }

 return 0;
}


