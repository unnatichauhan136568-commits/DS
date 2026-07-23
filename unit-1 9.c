#include <stdio.h>

int main() {
    int rows, cols;
    int arr[10][10];
    int i, j, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter the elements of the array:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate sum
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
