#include <stdio.h>

int main()
{
    int num,digit,result=0,place=1;
    printf("Enter a number");
    scanf("%d", &num);
    while(num>0)
    {
        digit=num%2;
        result += digit*place;
        num/=2;
        place*=10;
    }
    printf("Binary number is : %d", result);
}