#include<stdio.h>
#include<string.h>
int main(){
    typedef struct person{
        char name[15];
        int salary;
        int age;
    }person;

    person p1;
    strcpy(p1.name,"Arafat");
    p1.salary = 200000;
    p1.age = 25;

    person p2 = {"Rahman",400000,27};

    printf("%s\n",p1.name);
    printf("%d\n",p2.age);
    return 0;
}