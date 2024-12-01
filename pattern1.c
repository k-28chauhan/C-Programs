#include <stdio.h>

int main(){
    int n;
    printf("Enter no. of lines ");
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        for(int j=n-1;j>i;j--){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            printf(" ");
        }
        for(int k=n-1;k>=i;k--){
            printf("* ");
        }
        printf("\n");
    }
}