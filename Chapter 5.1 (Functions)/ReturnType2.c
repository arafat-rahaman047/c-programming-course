#include <stdio.h>
int sum(int x, int y){
    return x+y;
}
int main(){
    int a,b;
    printf("Enter Two Numbers : ");
    scanf("%d %d",&a,&b); // Pass by Value
    
    printf("%d",sum(a,b));
    return 0;
}