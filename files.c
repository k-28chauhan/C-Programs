#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *ptr;
    ptr = fopen("text.txt","r");
    char ch = fgetc(ptr);
    printf("%c",ch);
    fclose(ptr);
}