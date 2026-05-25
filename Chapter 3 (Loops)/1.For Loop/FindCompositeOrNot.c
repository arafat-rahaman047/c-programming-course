#include <stdio.h>
int main() {
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);

    for(int i=2; i<=n/2; i++) {
        if(n%i==0) {
            printf("%d is a Composite Number",n);
            break;
        }
        else {
            printf("%d is a Prime Number",n);
            break;
        }
    }

    return 0;
}