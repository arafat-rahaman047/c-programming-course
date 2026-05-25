#include<stdio.h>
int main(){
    int x[5] = {4,7,2,5,8};
    printf("%d\n",x[0]);
    printf("%d\n",x[1]);
    printf("%d\n",x[2]);
    printf("%d\n",x[3]);
    printf("%d\n\n",x[4]);
    x[1] = 10;
    printf("%d\n",x[0]);
    printf("%d\n",x[1]);
    printf("%d\n",x[2]);
    printf("%d\n",x[3]);
    printf("%d\n\n",x[4]);
    return 0;
}