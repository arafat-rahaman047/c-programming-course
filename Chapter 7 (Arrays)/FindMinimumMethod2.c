#include<stdio.h>
#include<limits.h>
int main(){
    int arr[] = {-43,-28,-13,-99,-19,-78,-37,-51};
    int n = sizeof(arr)/sizeof(int);
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}