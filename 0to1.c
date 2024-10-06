#include <stdio.h>

int main()
{
    int number,result=0,digit,place=1;
    printf("Enter a num ");
    scanf("%d", &number);
    if(number==0){
    printf("new number is : %d", 1);
    }
    else{
    while(number>0){
        digit=number%10;
        if(digit==0){
            digit=1;
        }
        else if(digit==1){
            digit = 0;
        }
        result= result + (digit*place);
        number/=10;
        place*=10;
    }
    
    printf("New number is : %d", result);
    }
    return 0;
}