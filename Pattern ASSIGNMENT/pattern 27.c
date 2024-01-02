#include<stdio.h>
int main()
{
    int t,x,y=1,z;
    int i,j,k,l,m,f=0,g=0;


    scanf("%d",&x);
    t=x+1;
    t=t*x;

    {
        for(i=1;i<=x;i++)
        {
            for(j=2;j<=2*i;j++)


                 printf("  ");


                for(k=0;k<=x-i;k++)
                  {

                      printf("%4d",y);

                    y=y+1;


                    if(k==x-i)
                       f=f+k+1;

                  }

                  printf(" ");

                  for(l=t-f+1;l<=t-g;l++)

                    printf("%4d",l);

                    g=f;


           printf("\n");
        }


    }


}

