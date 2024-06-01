#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, pelindrom = 1;
    
    printf("Enter any string: ");
    scanf("%s", str);
    
    while (str[length] != '\0') {
        length++;
    }
    
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            pelindrom = 0;
        }
    }
    
    if (pelindrom) {
        printf("Given string is a Palindrome.\n");
    } else {
        printf("Given string is not a Palindrome.\n");
    }
    
    return 0;
}