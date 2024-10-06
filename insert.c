#include <stdio.h>
int main(){     //inserting an element at nth position
    int a[10];
    int num,pos,n=10;

    for(int i=0;i<n;i++)
    {
        a[i] = i+1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n", a[i]);
    }
    printf("Enter the num ");
    scanf("%d", &num);
    printf("Enter position ");
    scanf("%d", &pos);
    n++;
    for(int i=n-1;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=num;
    for(int i =0;i<n;i++)
    {
        printf("%d\n", a[i]);
    }
}