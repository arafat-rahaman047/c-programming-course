#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter Three Values : \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c) {
        printf("%d is The Largest Number", a);
    }
    if(b>a && b>c) {
        printf("%d is The Largest Number", b);
    }
    else {
        printf("%d is The Largest Number", c);
    }
    return 0; 
}