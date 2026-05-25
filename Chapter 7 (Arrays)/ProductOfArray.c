#include<stdio.h>
int main(){
    int arr[5] = {2,3,4,5,7};
    int prod = 1;
    for(int i=0; i<(sizeof(arr)/4); i++){
        prod *= arr[i];
    }
    printf("%d",prod);
    return 0;
}