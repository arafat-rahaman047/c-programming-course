#include <stdio.h>
int main(){
    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);

    if((x%5==0 || x%3==0) && x%15!=0) {
        printf("Condition Valid");
    }
    else {
        printf("Condition Invalid");
    }

    return 0;
}