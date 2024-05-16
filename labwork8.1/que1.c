#include <stdio.h>

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int length = sizeof(arr) / sizeof(arr[0]);
    printf("\nLength of the Array: %d\n", length);

    return 0;
}
