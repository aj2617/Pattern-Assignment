
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int l,c;
    for(l=1;l<=n;l++)
    {
        for(c=0;c<=n-l;c++)
            printf("*");
        printf("\n");

    }



}
