
#include<stdio.h>
int main()
{
 int n;
 printf(" Enter line number :");
 scanf("%d",&n);

 for(int l=1; l<=n; l++){

  for(int s=1 ; s<=l ; s++)
         printf("*");

  printf("\n");

 }

 return 0;
}
