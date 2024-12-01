#include <stdio.h>

int main(){
    int len;
    printf("Enter length");
    scanf("%d",&len);
    int arr[len],temp;
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
        printf("%d ",arr[i]);
    }
}