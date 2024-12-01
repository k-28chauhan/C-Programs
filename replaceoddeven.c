#include <stdio.h>

int main(){
    int len;
    printf("Enter length");
    scanf("%d",&len);
    int arr[len];
    printf("Enter elements");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<len;i++){
        if(arr[i]%2==0){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
    for(int i=0;i<len;i++){
        printf("%d",arr[i]);
    }
}