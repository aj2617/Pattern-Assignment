

#include<stdio.h>
int main()
{
 int n,j,s,l;
 printf(" Enter line number :");
 scanf("%d",&n);

 for( l=1; l<=n; l++){

  for( s=1;s<=n-l;s++)
                   printf(" ");

  for( j=1;j<=l;j++)
                printf("*");


  printf("\n");

 }

 return 0;
}
