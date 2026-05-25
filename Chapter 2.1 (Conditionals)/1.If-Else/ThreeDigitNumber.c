#include <stdio.h>
int main(){
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    if(x>99 && x<1000) {
        printf("%d is a Three Digit Number", x);
    }
    else {
        printf("%d is not a Three Digit Number", x);
    }
    return 0;
}
