#include <stdio.h>
int min(int x, int y){
    if(x<y) return x;
    else return y;
}
int main(){
    int a,b;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&a,&b); // Pass by Value
    int m = min(a,b);
    printf("%d",m);
    return 0;
}