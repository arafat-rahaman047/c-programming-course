#include <stdio.h>
int main() {
    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);
    if(x%5==0) {
        if(x%3==0){
            printf("Divisible by 5 and 3");
        }
        else {
            printf("NOT Divisible by 5 and 3");
        }
    }
    else {
        printf("NOT Divisible by 5 and 3");
    }
    return 0;
}