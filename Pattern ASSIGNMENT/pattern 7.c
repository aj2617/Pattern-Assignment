#include<stdio.h>
int main()
{
 int n,j,l;
 printf(" Enter line number :");
 scanf("%d",&n);
 for(int l=n; l>=1; l--){

  for(int s=1;s<=n-l;s++)
                   printf(" ");

  for( j=1;j<=l;j++)
                printf("*");

  printf("\n");

 }

 return 0;
}
