#include<stdio.h>

typedef union student{
        int roll;
        float marks;
        char grade;
}student;

int main(){
    // student s = {76,70.7,'A'};
    // printf("%d\n",s.roll);
    // printf("%f\n",s.marks);
    // printf("%c\n",s.grade);
    student s;
    s.roll = 76;
    printf("%d\n",s.roll);
    s.grade = 'A';
    printf("%c\n",s.grade);
    
    return 0;
}