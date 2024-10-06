#include <stdio.h>

int main()
{
    int sum=0,num;
    while(num!=-999)
    {
        printf("enter a number");
        scanf("%d", &num);
        if(num==-999)
        {
            break;
        }
        sum+=num;
    }
    printf("SUM is %d", sum);
}