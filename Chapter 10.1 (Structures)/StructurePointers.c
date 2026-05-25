#include<stdio.h>

typedef struct student{
        int roll;
        float marks;
        char grade;
}student;

void change(student* s){
    // (*s).grade = 'B';
    s->grade = 'B';
}
int main(){
    student s = {76,70.7,'A'};

    printf("%c\n",s.grade);
    change(&s);
    printf("%c\n",s.grade);
    
    return 0;
}