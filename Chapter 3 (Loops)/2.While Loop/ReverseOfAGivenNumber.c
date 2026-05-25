#include <stdio.h>
int main() {
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    int r = 0;
    while (n>0){
        int ld = n%10;
        n=n/10;
        r = r*10 + ld;
    }
    printf("Reverse Of The Number : %d",r);
    return 0;
}