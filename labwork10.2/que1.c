#include <stdio.h>
int length(char a[], char ch);

int main() {
    
    char a[100], ch;
      int n; 
     
    n = length(a, ch); 
    
    printf("\nLength of the string: %d\n", n);

    return 0;
}

int length(char a[], char ch) {
    
  int n = 0;
    
    printf("Enter a string: ");
    scanf("%s", a); 
    
    for (int i = 0; a[i] != '\0'; i++) {
        n++;
    }
    
    return n;
}