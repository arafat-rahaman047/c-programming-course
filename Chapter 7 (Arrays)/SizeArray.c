#include<stdio.h>
int main(){
    int arr[] = {2,5,4,7,9,12,34,74,89};
    // printf("%lu\n",sizeof(arr));
    // printf("%lu\n",sizeof(arr[0]));
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    };
    return 0;
} 