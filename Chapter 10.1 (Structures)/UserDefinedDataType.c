#include<stdio.h>
int main(){
    struct student{
        int Roll;
        float Marks;
        char Grade;
    };

    struct student Arafat;
    Arafat.Roll = 47;
    Arafat.Marks = 74.5;
    Arafat.Grade = 'A';
    
    struct student Rahman = {12,76.2,'A'};
    return 0;
}