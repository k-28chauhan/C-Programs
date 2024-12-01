#include <stdio.h>

int main(){
    int length,even=0,odd=0,negative=0;
    puts("Enter length");
    scanf("%d",&length);
    int arr[length];
    printf("Enter elements");
    for(int i=0;i<length;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<length;i++){
        if(arr[i]%2==0){
            even++;
        }
        else if(arr[i]%2==1){
            odd++;
        }
        else if(arr[i]<0){
            negative++;
        }
    }
    printf("no. of even number is %d\n",even);
    printf("no. of odd numbers is %d\n",odd);
    printf("no. of negative numbers is %d\n",negative);
}