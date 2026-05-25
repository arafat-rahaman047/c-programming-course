#include <stdio.h>
int main() {
    int n;
    printf("Enter a Integer Value : ");
    scanf("%d",&n);

    int count=0;
    while(n>0){
        n = n/10;
        count++;
    }
    printf("Number of digit: %d\n",count);
}