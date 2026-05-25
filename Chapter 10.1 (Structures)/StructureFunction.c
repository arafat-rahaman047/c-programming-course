#include<stdio.h>

typedef struct student{
        int roll;
        float marks;
        char grade;
}student;


void print(student s){
    printf("%d\n",s.roll);
    printf("%f\n",s.marks);
    printf("%c\n",s.grade);
}

void change(student s){
    s.grade = 'B';
}
int main(){
    student s = {76,70.7,'A'};
    print(s);
    printf("%c\n",s.grade);
    change(s);
    printf("%c\n",s.grade);
    
    return 0;
}