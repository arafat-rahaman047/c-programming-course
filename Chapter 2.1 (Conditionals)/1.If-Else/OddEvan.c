#include <stdio.h>
int main() {
    int x;
    printf("Enter the Number : ");
    scanf("%d", &x);
    if(x%2==0) {
        printf("Even Number");
    }
    else {
        printf("Odd Number");
    };
    return 0;
}