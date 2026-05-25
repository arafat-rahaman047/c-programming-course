// Typecasting 
// Ques: Take integer "x" as input and print half of the number.

#include <stdio.h>
int main() {
    int x;
    printf("Enter an Integer: ");
    scanf("%d", &x);
    float f = (float)x;
    printf("%f",f/2);
    return 0;
}