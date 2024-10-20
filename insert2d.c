#include <stdio.h>

int main()
{
    int n,m;
    int arr[n][m];
    int row_pos,column_pos,value;
    printf("Enter row and column where you want to insert");
    scanf("%d %d",&row_pos,&column_pos);
    printf("Enter value to be inserted");
    scanf("%d",&value);
    printf("Enter values in array");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
n++;
m++;
    for(int i=n;i>=row_pos;i--){
        for(int j=m;j>=column_pos;j--){
            arr[i][j]=arr[i-1][j-1];
        }
    }
    arr[row_pos][column_pos]=value;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",arr[i][j]);
        }
    }
    return 0;
}