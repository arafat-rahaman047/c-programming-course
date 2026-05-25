#include<stdio.h>
#include<limits.h>
int fact(int n){
    if(n==0 || n==1) return 1;
    return n * fact(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",fact(n));
    printf("%d\n",INT_MAX);
    return 0;
}