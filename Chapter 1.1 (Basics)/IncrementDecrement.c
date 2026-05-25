#include <stdio.h>
int main() {
    int x=10;
    x++; //x=x+1
    printf("x= %d\n",x);

    x=x*10; 
    printf("x= %d\n",x);

    x--; //x=x-1
    printf("x= %d\n",x);

    int y=5;
    printf("y= %d\n",y);
    printf("y= %d\n",y++); // post-increment
    printf("y= %d\n",y);

    int z=5;
    printf("z= %d\n",z);
    printf("z= %d\n",++z); // post-increment
    printf("z= %d\n",z);

    return 0;
}