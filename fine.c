#include <stdio.h>
#include <string.h>

int main(){
    char string[]="Karaninder";
    int len=strlen(string);
    int i=0;
    while(string[i]!='\0'){
        if(string[i]>='a'&&string[i]<='z'){
            string[i]=string[i]-32;
        }
        i++;
    }
    printf("String is %s",string);
}