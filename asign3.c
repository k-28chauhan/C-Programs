#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,11,24,35};
    int len=sizeof(arr)/sizeof(arr[0]);
    int target,low=0,mid,high=len-1;
    printf("Enter target");
    scanf("%d",&target);
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target){
            printf("target found at index %d",mid);
            break;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    if()
}