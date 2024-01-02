
#include<stdio.h>
int main()
{
              int n;
              printf(" Enter line number :");
              scanf("%d",&n);
              int l,c,s;
      for(l=1 ; l<=n; l++)
      {
              for(s=1; s<=n-l;s++)
                       printf(" ");

              for(c=1; c<=n-1; c++){

                           if( c==1 || c == n-1 || l==1 || l==n)
                                    printf("*");
                           else
                                   printf(" ");
              }

 printf("\n");
      }

 return 0;
}


