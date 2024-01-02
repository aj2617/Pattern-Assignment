#include<stdio.h>
int main()
{
 int n;
 printf(" Enter line number :");
 scanf("%d",&n);
int l,s,c;

         ///for upper part
 for( l=1; l<=n; l++)
          {
                 for( c=1;c<=2*n-1;c++)
                       {
                              if( c+l == n+1  ||  c-l == n-1  )
                                     printf("*");
                               else
                                     printf(" ");
                         }
                 printf("\n");
          }
             ///lower part
  for( l=n-1; l>=1; l--)
          {
                   for(  c = 1;c <= 2*n-1; c++)
                                 {
                                         if(c+l == n+1  ||  c-l == n-1 )
                                                     printf("*");
                                           else
                                                   printf(" ");
                                   }
                  printf("\n");
          }
 return 0;
}

