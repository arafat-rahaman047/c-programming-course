#include<stdio.h>
int main(){
    char arr[] = "Arafat\0";
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     printf("%c",arr[i]);
    // }
    // printf("\n");
    // printf("%d",n);
    printf("%s",arr);
    return 0;
}