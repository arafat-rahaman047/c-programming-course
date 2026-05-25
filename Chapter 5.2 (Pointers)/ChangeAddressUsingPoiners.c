#include <stdio.h>
int main(){
    printf("\n");

    int x=3;
    int* z = &x;
    printf("%d\n",x);
    *z =4;  // Update Value
    printf("%d\n",x);

    printf("\n\n");
    return 0;
}