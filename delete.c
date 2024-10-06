#include <stdio.h>
int main(){
    int a[5]={1,2,3,4,5};
    int index;
    for(int i=0;i<5;i++)
    {
        printf("%d\n", a[i]);
    }
    printf("Enter index of number which you want to delete");
    scanf("%d", &index);
    for(int i=index;i<5;i++)
    {
        a[i-1]=a[i];
    }
    for(int i=0;i<4;i++)
    {
        printf("%d\n", a[i]);
    }
}