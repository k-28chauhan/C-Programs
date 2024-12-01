#include <stdio.h>

int main(){
    int seconds,hrs,mins,secs,temp;
    printf("Enter the no. of seconds");
    scanf("%d",&seconds);
    temp=seconds;
    hrs=temp/3600;
    mins=(seconds%3600)/60;
    secs=seconds-(hrs*3600 + mins*60);
    printf("HH:MM:SS\n");
    printf("%d:%d:%d",hrs,mins,secs);
}