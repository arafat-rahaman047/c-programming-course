#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter Three Number : ");
    scanf("%d %d %d", &a,&b,&c);

    if(a>b){
        if(a>c){
            printf("%d is The Largest",a);
        }
        else{
            printf("%d is The Largest",c);
        }
    }
    else {
        if(b>c){
            printf("%d is The Largest",b);
        }
        else{
            printf("%d is The Largest",c);
        }
    }
    return 0;
}