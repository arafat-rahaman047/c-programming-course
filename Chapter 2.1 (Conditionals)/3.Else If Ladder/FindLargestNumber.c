#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter Three Numbers : ");
    scanf("%d %d %d", &a,&b,&c);

    if(a>b && a>c) {
        printf("%d is The Largest Number", a);
    }
    else if(b>a && b>c) {
        printf("%d is The Largest Number", b);
    }
    else {
        printf("%d is The Largest Number", c);
    }
} 