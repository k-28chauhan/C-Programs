#include <stdio.h>

int main()
{
    int days;
    double fine;
    printf("Enter the no. of days");
    scanf("%d", &days);
    if(days<=5)
    {
        fine=0.5*days;
        printf("%.2f", fine);
    }
    else if(days>5 && days<=10){
        fine = 1*days;
        printf("%.2f", fine);
    }
    else if(days>10 && days<=30)
    {
        fine = 5*days;
        printf("%.2f", fine);
    }
    else{
        printf("your membership is cancelled");
    }
}