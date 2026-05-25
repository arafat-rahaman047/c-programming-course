#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<=n;i++){
        arr[i] = i*i;
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}