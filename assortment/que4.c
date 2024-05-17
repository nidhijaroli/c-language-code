#include <stdio.h>

int main() {
    
    int rows, cols, i, j, row, col, colSum = 0, rowSum = 0, array[100][100];
    
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    printf("\nEnter array's elements:\n");
    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nEnter row number: ");
    scanf("%d", &row);
    
    printf("Elements of row %d: ", row);
    
    for(j = 0; j < cols; j++) {
        
        printf("%d", array[row][j]);
            printf(", ");
        rowSum += array[row][j];
    }
    printf("\nThe sum of row %d: %d\n", row, rowSum);
    
    printf("\nEnter column number: ");
    scanf("%d", &col);
    
    printf("Elements of column %d: ", col);
    
    for(i = 0; i < rows; i++) {
        printf("%d", array[i][col]);
            printf(", ");
        colSum += array[i][col];
    }
    printf("\nThe sum of column %d: %d\n", col, colSum);
    
    return 0;
}