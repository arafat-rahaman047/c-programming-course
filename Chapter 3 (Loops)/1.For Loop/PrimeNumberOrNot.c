#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);
    bool flag = true;

    for(int i=2; i<=n/2; i++) {
        if(n%i==0) {
        bool flag = false;
            break;
        }
    }
    if(n==1){
        printf("%d is Neither Composite Nor Prime Number",n);
    }
    else if(flag==true) {
        printf("%d is a Prime Number",n);
    }
    else {
        printf("%d is a Composite Number",n);
    }
    return 0;
}