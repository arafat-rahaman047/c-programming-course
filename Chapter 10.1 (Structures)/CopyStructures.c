#include<stdio.h>
int main(){
    typedef struct student{
        int roll;
        float marks;
        char grade;
    }student;

    student s1 = {76,70.7,'A'};
    student s2 = s1;

    printf("%c\n",s1.grade);
    printf("%c\n",s2.grade);

    s2.grade = 'B';
    printf("%c\n",s1.grade);
    printf("%c\n",s2.grade);

    return 0;
}