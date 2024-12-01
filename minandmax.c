#include <stdio.h>

int main(){
    int len,max=0;
    printf("Enter length");
    scanf("%d",&len);
    int arr[len];
    puts("Enter elements");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[len-1];
    for(int i=0;i<len;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Smallest no. is %d\n",min);
    printf("Largest no. is %d",max);
    
}