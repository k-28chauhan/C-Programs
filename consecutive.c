#include <stdio.h>

int main(){
    int num,rem=0,i=0,count=0,length=0;
    printf("Enter a number");
    scanf("%d",&num);
    int temp=num;
    while(temp!=0){
        length++;
        temp/=10;
    }
    int arr[length];
    while(num!=0){
        rem=num%10;
        arr[i]=rem;
        num/=10;
        i++;
    }
    for(int i=0;i<length-1;i++){
        if(arr[i]==5&&arr[i-1]==5&&arr[i+1]==5){
            count++;
        }
    }
    if(count==1){
        printf("yes");
    }
    else{
        printf("NO");
    }
}
