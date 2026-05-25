#include <stdio.h>
int main() {
    int x;
    printf("Enter The Value : ");
    scanf("%d",&x);
    if(x>=0) {
        printf("Absolute Value is %d",x);
    };
    if(x<0) {
        x = x*(-1);
        printf("Absolute Value is %d",x);
    };
    return 0;
}