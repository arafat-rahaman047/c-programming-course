#include <stdio.h>
int main(){
    printf("\n");

    int x=9;
    int* z = &x;

    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%p\n",z);
    printf("%p\n",&z);
    printf("%d\n",*z);

    printf("\n\n");
    return 0;
}