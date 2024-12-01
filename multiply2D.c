#include <stdio.h>

int main(){
    int a[3][3],b[3][3],mul[3][3];
    int sum=0;
    printf("Enter elements in both arrays\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("first array ");
            scanf("%d",&a[i][j]);
            printf("second array ");
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            mul[i][j]=0;
            for(int k=0;k<3;k++){
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}