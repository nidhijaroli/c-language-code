#include <stdio.h>

int main() {
    int rows = 5;
    
    for (int i = 0; i < rows; i++) {
        //  spaces before numbers
        for (int j = 0; j < rows - i - 1; j++) {
            printf("   ");
        }
        
        //  ascending numbers
        for (int j = i + 1; j <= rows; j++) {
            printf("%d ", j);
        }
        
        // descending numbers
        for (int j = rows - i - 1; j >= i + 1; j--) {
            printf("%d ", j);
        }
        
        printf("\n");
    }
    
    return 0;
}
