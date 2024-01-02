#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    // Loop for each line
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j < i; j++) {
            printf("  ");
        }

        // Print decreasing numbers
        for (int j = n; j >= i; j--) {
            printf("%d ", j);
        }

        // Print increasing numbers
        for (int j = i + 1; j <= n; j++) {
            printf("%d ", j);
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
