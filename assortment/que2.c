#include <stdio.h>

int main() {
    
    int rows, cols, i, j, array[100][100], largest = array[0][0];

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
    
    for(i = 0; i < rows; i++) {
        
        for(j = 0; j < cols; j++) {
            
            if(array[i][j] > largest) {
                largest = array[i][j];
            }
        }
    }
    
    printf("\nThe largest element is: %d\n", largest);
    
    return 0;
}
