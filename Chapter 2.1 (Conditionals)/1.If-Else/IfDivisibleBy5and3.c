#include <stdio.h>
int main(){
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    if(x/5==0 && x/3==0) {
        printf("%d is divisible by 3 and 5", x);
    }
    else {
        printf("%d is NOT divisible by 3 and 5", x);
    }
    return 0;
}
