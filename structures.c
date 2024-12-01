#include <stdio.h>
#include <string.h>

int main(){
    struct student{
        char name[15];
        int marks;
        float cgpa;
        struct scores{
            int math,chem,comp;
        }score;
    }s[3];
    strcpy(s[0].name,"Karaninder");
    s[0].score.chem = 43;
    s[1].score.math = 99;
    printf("%s %d %d", s[0].name, s[1].score.math, s[0].score.chem);
    /*for(int i=0;i<3;i++){
        scanf("%s %d %f",  &s[i].name, &s[i].marks, &s[i].cgpa);
    }
    for(int i=0;i<3;i++){
        printf("Student name is %s\nStudent marks are %d\nStudent cgpa is%.2f\n",s[i].name,s[i].marks,s[i].cgpa);
    }*/
}