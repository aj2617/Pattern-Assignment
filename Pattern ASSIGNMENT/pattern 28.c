#include<stdio.h>

int main()
{
 int n;
 printf(" Enter line number :");
 scanf("%d",&n);

 for(int l=1; l<=n; l++){
                      for(int s=1; s<=n-l; s++)
                                     printf(" ");

                       for(int c=1; c<=l; c++)
                                     printf("* ");

  printf("\n");
 }
for(int l=n-1; l>=1; l--){
                      for(int s=1; s<=n-l; s++ )
                                     printf(" ");

                       for(int c=1; c<=l; c++)
                                     printf("* ");

  printf("\n");
 }



 return 0;
}



