#include <stdio.h>

int main(){
    int n,sum=0,product=0;
    printf("Enter no.");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        product=product*10 + 1;
        sum=sum+product;
        printf("%d + ",product);
    }
    printf("total sum is %d",sum);
}