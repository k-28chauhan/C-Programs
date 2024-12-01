#include <stdio.h>

int main(){
    int num1,num2,sum1=0,sum2=0;
    printf("Enter first and second no.");
    scanf("%d %d",&num1,&num2);
    for(int i=1;i<=num1/2;i++){
        if(num1%i==0){
            sum1+=i;
        }
    }
    for(int i=1;i<=num2/2;i++){
        if(num2%i==0){
            sum2+=i;
        }
    }
    if(sum1==num2 && sum2==num1){
        printf("yes");
    }
    else{
        printf("NO");
    }
}