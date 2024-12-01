#include <stdio.h>

int main(){
    int days,years,month,rdays,temp;
    printf("Enter no. of days ");
    scanf("%d",&days);
    temp=days;
    years=temp/365;
    month=(days%365)/30;
    rdays=days - (years*365 + month*30);
    printf("YY:MM:DD\n");
    printf("%d:%d:%d",years,month,rdays);
}