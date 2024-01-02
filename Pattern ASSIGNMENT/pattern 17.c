
#include<stdio.h>
int main()
{
 int n,l,c,s;
 printf("Enter line number: ");
 scanf("%d",&n);

 for(l=1;l<=n;l++)
 {
       for(s=1;s<=n-l;s++)
        printf(" ");

       for(c=l;c>=1;c--)
        printf("%d",c);
        for(c=2;c<=l;c++)
         printf("%d",c);

       printf("\n");


 }

 for(l=n;l>=1;l--)
 {
       for(s=1;s<=n-l+1;s++)
        printf(" ");

       for(c=l-1;c>=1;c--)
        printf("%d",c);
        for(c=2;c<=l-1;c++)
         printf("%d",c);

       printf("\n");


 }

}

