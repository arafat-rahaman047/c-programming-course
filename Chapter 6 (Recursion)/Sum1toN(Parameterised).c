#include<stdio.h>
void sum1toN(int n, int sum){
    if(n==0){
        printf("%d",sum);
    }
    sum1toN(n-1,sum+n);
    return;
}
int main(){
    int n;
    scanf("%d",&n);
    sum1toN(n,0);
    return 0;
}