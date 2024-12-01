#include <stdio.h>

int main(){
    int len,temp;
    printf("enter length");
    scanf("%d",&len);
    int arr[len];
    printf("Enter elements");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<len;i++){
        if(arr[i+1]!=arr[i]){
            printf("%d",arr[i]);
        }
    }
}