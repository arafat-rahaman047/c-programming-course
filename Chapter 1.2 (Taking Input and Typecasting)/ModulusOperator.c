#include <stdio.h>
int main() {
    int x,y,z;
    scanf("%d\n %d", &x,&y);
    z = x%y;
    printf("The Modulus: %d", z);
    return 0;
}