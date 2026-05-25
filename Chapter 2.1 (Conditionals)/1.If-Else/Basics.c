#include <stdio.h>
int main() {
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    // if statement
    if(x>0) printf("Positive Number\n");
    if(x<0) printf("Negative Number\n");
    else printf("Number is Zero\n");
    return 0;
}