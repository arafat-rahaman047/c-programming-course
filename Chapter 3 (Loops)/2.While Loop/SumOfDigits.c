#include <stdio.h>
int main() {
    int n;
    printf("Enter a Integer Value : ");
    scanf("%d",&n);

    int sum=0;
    while (n>0){
        int ld = n%10;
        n=n/10;
        sum = sum+ld;
    }
    printf("Sum of The Digits : %d",sum);
    return 0;
}