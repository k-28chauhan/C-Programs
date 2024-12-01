#include <stdio.h>
#include <math.h>

int main(){
    int num,rem,count=0,sum=0,temp;
    printf("Enter a num");
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        count++;
        temp/=10;
    }
    while(num!=0){
        rem=num%10;
        sum=sum + pow(rem,count);
        num/=10;
    }
    printf("armstrong number is %d",sum);

}