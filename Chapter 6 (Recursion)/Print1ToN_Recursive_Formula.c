#include<stdio.h>
int sum(int n){
    if(n==1) return 1;
    int s = n + sum(n-1);
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}