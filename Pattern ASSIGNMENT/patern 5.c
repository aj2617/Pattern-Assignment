
#include<stdio.h>
int main()
{
      int n;
      printf(" Enter line number :");
      scanf("%d",&n);
      int s;
      for(int l=1; l<=n; l++){
       if(l<=n/2+1){
            for(int s=1; s<=l ;s++)
                    printf("*");
          }
            else
          for(int s=1 ;s<=n-l+1;s++)
                    printf("*");

 printf("\n");
 }

 return 0;
}

