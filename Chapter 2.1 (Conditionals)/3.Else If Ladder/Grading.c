#include <stdio.h>
int main() {
    int x;
    printf("Enter The Marks : ");
    scanf("%d",&x);

    if(x<=100 && x>=80) {
        printf("Grade : A+");
    }
    else if(x<=79 && x>=70) {
        printf("Grade : A");
    }
    else if(x<=69 && x>=60) {
        printf("Grade : A-");
    }
    else if(x<=59 && x>=50) {
        printf("Grade : B");
    }
    else if(x<=49 && x>=40) {
        printf("Grade : C");
    }
    else if(x<=33 && x>=39) {
        printf("Grade : D");
    }
    else if (x<=32 && x>=0) {
        printf("Grade : F");
    }
    else {
        printf("Invalid Marks");
    }

    return 0;
}