#include <stdio.h>
#include <string.h>

int main(){
    char string[100],secondwrd[100],thirdwrd[100];
    puts("Enter a string");
    gets(string);
    int len=strlen(string);
    int count=0,i=0,k=0,m=0,start2,end2,start3,end3,str2,str3;
    while(string[i]!=' '){
        count++;
        i++;
    }
    start2=count+1;
    str2=start2;
    count=0;
    while (string[str2]!=' ')
    {
        count++;
        str2++;
    }
    end2=str2-1;
    start3=str2+1;
    str3=start3;
    count=0;
    while(string[str3]!=' '){
        count++;
        str3++;
    }
    end3=str3-1;
    for(int j=start2;j<=end2;j++){
        secondwrd[k++]=string[j];
    }
    secondwrd[k]='\0';
    for(int n=start3;n<=end3;n++){
        thirdwrd[m++]=string[n];
    }
    thirdwrd[m]='\0';
    for(int j=0;j<len;j++){
        if(j==start2){
            printf("%s",thirdwrd);
            j=end2;
        }
        else if(j==start3){
            printf("%s",secondwrd);
            j=end3;
        }
        else{
            printf("%c",string[j]);
        }
    }
    return 0;
}
