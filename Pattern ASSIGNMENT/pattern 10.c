#include<stdio.h>

int main()
{
 int n,s,c;
 printf(" Enter line number :");
 scanf("%d",&n);

 for(int l=1; l<=n; l++){
                      for( s=1; s<=n-l; s++)
                                     printf(" ");

                       for(c=1; c<=l; c++)
                                     printf("* ");

  printf("\n");
 }

 return 0;
}


