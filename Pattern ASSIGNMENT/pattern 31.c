//way--1
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

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
//way-2
#include <stdio.h>

void printPattern(int N) {
    for (int i = 1; i <= 2 * N - 1; i++) {
        int cnt = N;
        for (int j = 1; j <= 2 * N - 1; j++) {
            printf("%d ", cnt);

            if (i > j)
                cnt--;

            if (i + j >= 2 * N) {
                cnt++;
            }
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printPattern(N);

    return 0;
}
//way-3
#include <stdio.h>

void printPattern(int N) {
    int totalMatrixSize = 2 * N - 1;
    int start = 0;
    int end = totalMatrixSize - 1;
    int arr[totalMatrixSize][totalMatrixSize];

    // Fill the 2D array
    while (N != 0) {
        for (int row = start; row <= end; row++) {
            for (int col = start; col <= end; col++) {
                if (row == start || row == end || col == start || col == end) {
                    arr[row][col] = N;
                }
            }
        }
        start++;
        end--;
        N--;
    }

    // Print the 2D array
    for (int row = 0; row < totalMatrixSize; row++) {
        for (int col = 0; col < totalMatrixSize; col++) {
            printf("%d ", arr[row][col]);
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    printPattern(N);

    return 0;
}
//way-4

