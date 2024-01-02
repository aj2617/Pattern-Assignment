1
#include<stdio.h>
int main()
{
 int n;
 printf(" Enter line number :");
 scanf("%d",&n);

 for(int l=1; l<=n; l++){
           for(int c=n; c>=l; c--)
            printf("%d ",l);

  printf("\n");

 }

 return 0;
}


