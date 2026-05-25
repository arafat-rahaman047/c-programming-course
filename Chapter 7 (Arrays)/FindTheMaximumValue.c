#include<stdio.h>
int main(){
    int arr[] = {43,28,10,99,19,78,37,51};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}