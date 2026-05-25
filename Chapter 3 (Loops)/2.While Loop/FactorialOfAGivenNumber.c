#include <stdio.h>
int main() {
    int n;
    printf("Enter The Value Of n : ");
    scanf("%d",&n);

    int f = 1;
    int i = 0;
    while (n>=1){
        f = f*n;
        n=(n-1);
    }
    printf("The Factorial is : %d",f);
    return 0;
}