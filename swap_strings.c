#include <stdio.h>
void swap(char* string){
    char *begin, *end, ch; 
    int len = strlen(string);
    begin = string;
    end = string+len-1;
    for(int i=0;i<len/2;i++){
        ch = *end;
        *end = *begin;
        *begin = ch;
        begin++;
        end--;
    }
    
}
int main() {
    char* string[100];
    puts("enter a string");
    gets(string);
    swap(string);
    printf("%s", string);

}