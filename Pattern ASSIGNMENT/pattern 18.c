#include<stdio.h>
int main()
{
 int n;
 printf(" Enter line number :");
 scanf("%d",&n);
int l,s,c;
 for( l=1; l<=n; l++)
  {
            for(c=n;c>=l;c--)
                 printf("*");
            for(int s=3;s<=2*l;s++)
                   printf(" ");
            for( int j=n;j>=l;j--)
                printf("*");
              printf("\n");
    }


 for( l=n; l>=1; l--)
  {
            for(c=n;c>=l;c--)
                 printf("*");
            for(int s=3;s<=2*l;s++)
                   printf(" ");
            for( int j=n;j>=l;j--)
                printf("*");
              printf("\n");
    }


 return 0;
}

