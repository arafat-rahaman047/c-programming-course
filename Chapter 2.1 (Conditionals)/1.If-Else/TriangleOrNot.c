#include <stdio.h>
int main() {
    int x,y,z;
    printf("Enter The Values of The Three Sides of a Triangle : \n");
    scanf("%d %d %d",&x,&y,&z);

    if((x+y)>z && (y+z)>x && (z+x)>y) {
        printf("YES, It is a Triangle");
    }

    else{
        printf("NO, It is not a Triangle");
    };
    return 0;
}
