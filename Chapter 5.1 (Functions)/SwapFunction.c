#include<stdio.h>
void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
int x,y;
int main(){
    scanf("%d %d",&x,&y);
    printf("%d %d\n",x,y);
    swap(x,y);
    printf("%d %d\n",x,y);
    return 0;
}