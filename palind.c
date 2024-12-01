#include <stdio.h>
#include <string.h>

int main(){
    char name[]="NamaN";
    int len=strlen(name);
    int j=0;
    char temp[len];
    for(int i=len-1;i>=0;i--){
        temp[j++]=name[i];
    }
    temp[j]='\0';
    if(strcmp(temp,name)==0){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }

}