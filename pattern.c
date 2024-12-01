#include <stdio.h>
#include <string.h>

int main(){
    char string[]="UNIVERSITY";
    int len=strlen(string);
    for(int i=0;i<len-1;i+=2){
        for(int j=0;j<i+2;j++){
            printf("%c",string[j]);
        }
        printf("\n");
    }
    for(int i=len;i>2;i-=2){
        for(int j=0;j<i-2;j++){
            printf("%c",string[j]);
        }
        printf("\n");
    }
}