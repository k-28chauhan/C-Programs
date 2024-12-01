#include <stdio.h>

int main(){
    int arr[3][3],temp[3][3];
    printf("enter elements");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            temp[i][j]=arr[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",temp[i][j]);
        }
        printf("\n");
    }

}