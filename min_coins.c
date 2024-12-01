#include <stdio.h>

int canchange(int k) {
    int min_coins=9999999;
    if(k==0){
        return 0;
    }
    if(k<0){
        return -1;
    }
    int count1 = canchange(k-10);
    int count2 = canchange(k-5);
    int count3 = canchange(k-3);

    if(count1!=-1){
        min_coins=count1+1;
    }
    else if(count2!=-1 && count2 + 1 < min_coins){
        min_coins=count2+1;
    }
    else if(count3!=-1 && count3 + 1 < min_coins){
        min_coins=count3+1;
    }
    return (min_coins==9999999)?-1:min_coins;


}

int main() {
    int num;
    printf("Enter the value ");
    scanf("%d",&num);
    int result = canchange(num);
    if(result==-1) printf("Can't produce change");
    else printf("Min no. of coins required : %d", result);

}