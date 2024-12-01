#include <stdio.h>
#include <string.h>

int main(){
    char string1[100],string2[100],temp;
    puts("enter a string1");
    gets(string1);
    puts("Enter second string");
    gets(string2);
    int len=strlen(string1);
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(string1[j]>string1[j+1]){
                temp=string1[j];
                string1[j]=string1[j+1];
                string1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(string2[j]>string2[j+1]){
                temp=string2[j];
                string2[j]=string2[j+1];
                string2[j+1]=temp;
            }
        }
    }
    if(strcmp(string1,string2)==0){
        printf("they are anagrm");
    }
    else{
        printf("they are not anagram");
    }
}