#include <stdio.h>

int main() {
    char latter='a';
    
    do{
        printf("%c ",latter);
        latter+=4;
    }while(latter<='z');

    return 0;
}