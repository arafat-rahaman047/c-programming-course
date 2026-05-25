#include<stdio.h>
#include<limits.h>
int main(){
    int arr[] = {-43,-28,-13,-99,-19,-78,-37,-51};
    int n = sizeof(arr)/sizeof(int);
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}