#include <stdio.h>

int main()
{
    int num,digit,i=0;
    printf("Enter a number ");
    scanf("%d", &num);
    char hexNum[100];
    while(num>0){
        digit=num%16;
        if(digit<10)
        {
            hexNum[i]=digit+48;
        }
        else{
            hexNum[i]=digit+55;
        }
        num/=16;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%c",hexNum[j]);
    }
}