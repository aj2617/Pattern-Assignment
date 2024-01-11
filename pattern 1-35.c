#include <stdio.h>
int l,s,c,i,j;
// Function to print pattern 1
void pattern1(int n) {
    for(int l=1; l<=n; l++){

       for(int s=1;s<=n; s++)
                 printf("*");

       printf("\n");
   }
}

// Function to print pattern 2
void pattern2(int n) {
   for(int l=1; l<=n; l++){

  for(int s=1 ; s<=l ; s++)
         printf("*");

  printf("\n");

 }
}

// Function to print pattern 3
void pattern3(int n) {
    int l,c;
    for(l=1;l<=n;l++)
    {
        for(c=0;c<=n-l;c++)
            printf("*");
        printf("\n");

    }
}

// Function to print pattern 4
void pattern4(int n) {
    for(int l=1; l<=n; l++){

          for(int s=1; s<=l;s++)
           printf("%d ",s);
  printf("\n");
 }
}

// Function to print pattern 5
void pattern5(int n) {
    for (int l = 1; l <= n; l++) {
        for (int s = 1; s <= l; s++)
            printf("*");
        printf("\n");
    }
    for (int l = n - 1; l >= 1; l--) {
        for (int s = 1; s <= l; s++)
            printf("*");
        printf("\n");
    }
}

// Function to print pattern 6
void pattern6(int n) {
    int c;
    for (int l = 1; l <= n; l++) {
        for (int s = 1; s <= n - l; s++)
            printf(" ");
        for (c = 1; c <= l; c++)
            printf("*");
        printf("\n");
    }
}

// Function to print pattern 7
void pattern7(int n) {
    int c;
    for (int l = n; l >= 1; l--) {
        for (int s = 1; s <= n - l; s++)
            printf(" ");
        for (c = 1; c <= l; c++)
            printf("*");
        printf("\n");
    }
}

// Function to print pattern 8
void pattern8(int n) {
    for (int l = 1; l <= n; l++) {
        for (int s = 1; s <= n - l; s++)
            printf(" ");
        for (int c = 1; c <= 2 * l - 1; c++)
            printf("*");
        printf("\n");
    }
}

// Function to print pattern 9
void pattern9(int n) {
    for (int l = n; l >= 1; l--) {
        for (int s = 1; s <= n - l; s++)
            printf(" ");
        for (int c = 1; c <= 2 * l - 1; c++)
            printf("*");
        printf("\n");
    }
}

// Function to print pattern 10
void pattern10(int n) {
    int l, s, c;
    for (l = 1; l <= n; l++) {
        for (s = 1; s <= n - l; s++)
            printf(" ");
        for (c = 1; c <= l; c++)
            printf("* ");
        printf("\n");
    }
}

// Function to print pattern 11
void pattern11(int n) {
    for (int l = n; l >= 1; l--) {
        for (int s = 1; s <= n - l; s++)
            printf(" ");
        for (int c = 1; c <= l; c++)
            printf("* ");
        printf("\n");
    }
}

// Function to print pattern 12
void pattern12(int n) {
   for(int l=n; l>=1; l--){
                      for(int s=1; s<=n-l; s++ )
                                     printf(" ");

                       for(int c=1; c<=l; c++)
                                     printf("* ");

                       printf("\n");
          }
 for(int l=1; l<=n; l++){
                      for(int s=1; s<=n-l; s++)
                                     printf(" ");

                       for(int c=1; c<=l; c++)
                                     printf("* ");

  printf("\n");
 }
}

// Function to print pattern 13
void pattern13(int n) {
    int l,s,c;
 for( l=1; l<=n; l++){
                      for( c=1;c<=2*n-1;c++)
                       {
                             if(c+l==n+1 || c-l==n-1 || n==l)
                                          printf("*");
                              else
                                      printf(" ");
                      }
                             printf("\n");
                      }
}

// Function to print pattern 14
void pattern14(int n) {
 int l,s,c;
    for( l=n; l>=1; l--){
                      for( c=1;c<=2*n-1;c++)
                       {
                             if(c+l==n+1 || c-l==n-1 || n==l)
                                          printf("*");
                              else
                                      printf(" ");
                      }
                             printf("\n");
                      }
}

// Function to print pattern 15
void pattern15(int n) {
    int l,s,c;

         ///for upper part
 for( l=1; l<=n; l++)
          {
                 for( c=1;c<=2*n-1;c++)
                       {
                              if( c+l == n+1  ||  c-l == n-1  )
                                     printf("*");
                               else
                                     printf(" ");
                         }
                 printf("\n");
          }
             ///lower part
  for( l=n-1; l>=1; l--)
          {
                   for(  c = 1;c <= 2*n-1; c++)
                                 {
                                         if(c+l == n+1  ||  c-l == n-1 )
                                                     printf("*");
                                           else
                                                   printf(" ");
                                   }
                  printf("\n");
          }
}

// Function to print pattern 16
void pattern16(int n) {
    for (l = 0; l< n; l++) {

        for (s = 1; s<= n - l; s++)
            printf("  ");

        for (j = 0; j <= l; j++) {
            if (j == 0 || l == 0)
                c = 1;
            else
                c = c * (l - j + 1) / j;
            printf("%4d", c);
        }

        printf("\n");
    }

}

// Function to print pattern 17
void pattern17(int n) {
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

// Function to print pattern 18
void pattern18(int n) {
     for( l=1; l<=n; l++)
  {
            for(c=n;c>=l;c--)
                 printf("*");
            for(int s=3;s<=2*l;s++)
                   printf(" ");
            for( int j=n;j>=l;j--)
                printf("*");
              printf("\n");
    }


 for( l=n; l>=1; l--)
  {
            for(c=n;c>=l;c--)
                 printf("*");
            for(int s=3;s<=2*l;s++)
                   printf(" ");
            for( int j=n;j>=l;j--)
                printf("*");
              printf("\n");
    }
}

// Function to print pattern 19
void pattern19(int n) {
 ///Upper part of the pattern
    for (l = 1; l <= n / 2 + 1; l++) {
        for (c = 1; c <= l; c++)
            printf("*");

        for (s = 1; s <= 2 * (n / 2 + 1 - l); s++)
            printf(" ");

        for (c = 1; c <= l; c++)
            printf("*");

        printf("\n");
    }

    /// Lower part of the pattern
    for (l = n / 2; l >= 1; l--) {
        for (c = 1; c <= l; c++)
            printf("*");

        for (s = 1; s <= 2 * (n / 2 + 1 - l); s++)
            printf(" ");

        for (c = 1; c <= l; c++)
            printf("*");

        printf("\n");
    }

}

// Function to print pattern 20
void pattern20(int n) {
   for( l=1;l<=n; l++)
    {
                 for(c=1; c<=n-1; c++)
                  {
                          if( l == 1 || l == n || c == 1 || c == n-1)
                                    printf("*");
                          else
                                 printf(" ");
                 }
                 printf("\n");

    }

}
// Function to print pattern 21
void pattern21(int n) {
    int sum=1;       int l,c;
   for( l=1; l<=n; l++)
        {
            for( c=1; c<=l; c++)
                  {
                        printf("%2d ", sum);

                        sum++;}

                        printf("\n");
                   }
}

// Function to print pattern 22
void pattern22(int n) {
   for(int l=1; l<=n; l++){

           for(c=1;c<=l;c++){
             if((c+l)%2==0)
            printf("%d ",1);
           else
            printf("%d ",0);
                 }
  printf("\n");

 }
}

// Function to print pattern 23
void pattern23(int n) {
  for( l=1; l<=n; l++){
                      for( c=1;c<=2*n-1;c++)
                       {
                             if(c+l==n+1 || c-l==n-1 )
                                          printf(" *");
                              else
                                      printf("  ");
                      }

                             for( c=2;c<=2*n-1;c++)
                       {
                             if(c+l==n+1 || c-l==n-1 )
                                          printf(" *");
                              else
                                      printf("  ");
                      }
                             printf("\n");
                      }

}

// Function to print pattern 24
void pattern24(int n) {
printf("%d",n);
}

// Function to print pattern 25
void pattern25(int n) {
     for(l=1 ; l<=n; l++)
      {
              for(s=1; s<=n-l;s++)
                       printf(" ");

              for(c=1; c<=n-1; c++){

                           if( c==1 || c == n-1 || l==1 || l==n)
                                    printf("*");
                           else
                                   printf(" ");
              }

 printf("\n");
      }

}

// Function to print pattern 26
void pattern26(int n) {
    for(int l=1; l<=n; l++){
           for(int c=n; c>=l; c--)
            printf("%d ",l);

  printf("\n");

 }

}


// Function to print pattern 27
void pattern27(int n) {
    int x = n; // Assuming x is meant to be the same as n
    int t, y = 1, z;
    int i, j, k, l, m, f = 0, g = 0;

    t = x + 1;
    t = t * x;

    for (i = 1; i <= x; i++) {
        for (j = 2; j <= 2 * i; j++)
            printf("  ");

        for (k = 0; k <= x - i; k++) {
            printf("%4d", y);
            y = y + 1;

            if (k == x - i)
                f = f + k + 1;
        }

        printf(" ");

        for (l = t - f + 1; l <= t - g; l++)
            printf("%4d", l);

        g = f;

        printf("\n");
    }
}

// Function to print pattern 28
void pattern28(int n) {
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

}

// Function to print pattern 29
void pattern29(int n) {
     ///Upper part of the pattern
    for (l = 1; l <= n / 2 + 1; l++) {
        for (c = 1; c <= l; c++)
            printf("*");

        for (s = 1; s <= 2 * (n / 2 + 1 - l); s++)
            printf(" ");

        for (c = 1; c <= l; c++)
            printf("*");

        printf("\n");
    }

    /// Lower part of the pattern
    for (l = n / 2; l >= 1; l--) {
        for (c = 1; c <= l; c++)
            printf("*");

        for (s = 1; s <= 2 * (n / 2 + 1 - l); s++)
            printf(" ");

        for (c = 1; c <= l; c++)
            printf("*");

        printf("\n");
    }

}

// Function to print pattern 30
void pattern30(int n) {

 for(l=1;l<=n;l++)
 {
       for(s=1;s<=n-l;s++)
        printf("  ");

       for(c=l;c>=1;c--)
        printf("%d ",c);
        for(c=2;c<=l;c++)
         printf("%d ",c);

       printf("\n");


 }

}

// Function to print pattern 31
void pattern31(int n) {
 int size = n*2 - 1;

    for(int i=0; i<size; i++)
    {

        for(int j=0; j<size; j++)
        {

            int min = i < j ? i : j;

            min = min < size-i ? min : size-i-1;

            min = min < size-j-1 ? min : size-j-1;

            printf("%d ", n-min);

        }

        printf("\n");

    }


}

// Function to print pattern 32
void pattern32(int n) {
   for(l=1;l<=n;l++){
        for(c=l;c>0; c--)
        printf("%c ",     'A' +n -c  );

printf("\n");
      }
}

// Function to print pattern 33
void pattern33(int n) {
   char k = 'A';


    for (l = 1; l <= n; l++) {
        for (c = 1; c <= l; c++) {
            if ((c + l) % 2 == 0)
             {
               printf("%c ", k + ('a' - 'A')); /* [ k+(a-A) =>  A+a-A  => 65+97-65  = 97 =a ] */

            } else {

                printf("%c ", k);
            }
            k++;
        }
        printf("\n");
    }
}

// Function to print pattern 34
void pattern34(int n) {
 for (i = 0; i <= n; i++) {


        for (j = i; j < n; j++) {
            printf("%c ", 'A' + n - j - 1);
        }

        printf("\n");
    }
}

// Function to print pattern 35
void pattern35(int n) {
    for (l = 1; l <= n ; l++) {
        for (c = 1; c <= l; c++)
            printf("%d",c);
 ///[pattern may be miss behave if n>9.please enter n<=9]
        for (s = 1; s <= 2 * (n - l); s++)
            printf(" ");

        for (c = l; c >= 1; c--)
            printf("%d",c);

        printf("\n");
    }

}


int main() {
    int n;

    printf("Enter the line number: ");
    scanf("%d", &n);


    printf("Pattern 1 :\n\n");
    pattern1(n);
    printf("\nPattern 2 :\n\n");
    pattern2(n);
    printf("\nPattern 3 :\n\n");
    pattern3(n);
    printf("\nPattern 4 :\n\n");
    pattern4(n);
    printf("\nPattern 5 :\n\n");
    pattern5(n);
    printf("\nPattern 6 :\n\n");
    pattern6(n);
    printf("\nPattern 7 :\n\n");
    pattern7(n);
    printf("\nPattern 8 :\n\n");
    pattern8(n);
    printf("\nPattern 9 :\n\n");
    pattern9(n);
    printf("\nPattern 10 :\n\n");
    pattern10(n);
    printf("\nPattern 11:\n\n");
    pattern11(n);
    printf("\nPattern 12:\n\n");
    pattern12(n);
    printf("\nPattern 13:\n\n");
    pattern13(n);
    printf("\nPattern 14:\n\n");
    pattern14(n);
    printf("\nPattern 15:\n\n");
    pattern15(n);
    printf("\nPattern 16:\n\n");
    pattern16(n);
    printf("\nPattern 17 :\n\n");
    pattern17(n);
    printf("\nPattern 18 :\n\n");
    pattern18(n);
    printf("\nPattern 19:\n\n");
    pattern19(n);
    printf("\nPattern 20:\n\n");
    pattern20(n);
    printf("\nPattern 21 :\n\n");
    pattern21(n);
    printf("\nPattern 22 :\n\n");
    pattern22(n);
    printf("\nPattern 23 :\n\n");
    pattern23(n);
    printf("\nPattern 24 :\n\n");
    pattern24(n);
    printf("\nPattern 25 :\n\n");
    pattern25(n);
    printf("\nPattern 26 :\n\n");
    pattern26(n);
    printf("\nPattern 27 :\n\n");
    pattern27(n);
    printf("\nPattern 28 :\n\n");
    pattern28(n);
    printf("\nPattern 29 :\n\n");
    pattern29(n);
    printf("\nPattern 30 :\n\n");
    pattern30(n);
    printf("Pattern 31 :\n\n");
    pattern31(n);
    printf("\nPattern 32 :\n\n");
    pattern32(n);
    printf("\nPattern 33 :\n\n");
    pattern33(n);
    printf("\nPattern 34 :\n\n");
    pattern34(n);
    printf("\nPattern 35 :\n\n");
    pattern35(n);


    return 0;
}



