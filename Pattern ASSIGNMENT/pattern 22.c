
#include<stdio.h>
int main()
{
 int n;
 printf(" Enter line number :");
 scanf("%d",&n);
       int c;
 for(int l=1; l<=n; l++){

           for(c=1;c<=l;c++){
             if((c+l)%2==0)
            printf("%d ",1);
           else
            printf("%d ",0);
                 }
  printf("\n");

 }

 return 0;
}


