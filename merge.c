#include <stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int b[]={6,7,8,9,10};
    int size1=sizeof(a)/sizeof(a[0]);
    int size2 = sizeof(b)/sizeof(b[0]);
    int size3 = size1 + size2;
    int temp[size3];
    for(int i=0;i<size1;i++)
    {
        temp[i]=a[i];
    }
    for(int i=0;i<size2;i++){
        temp[i+size1]=b[i];
    }
    for(int i=0;i<size3;i++)
    {
        printf("%d\n", temp[i]);
    }
}