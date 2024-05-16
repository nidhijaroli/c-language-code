#include <stdio.h>

int main() {
    
    int size, i, arr[100];

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("\nEnter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nThe squares are: ");
    for (i = 0; i < size; i++) {
        printf("%d, ", arr[i] * arr[i]);
    }

    return 0;
}