#include<stdio.h>
#include<limits.h>
int main(){
    int arr[4][4] = {-10,-7,-4,17,43,28,10,99,19,78,37,51,65,23,98,-56};
    int max = INT_MIN;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(max<arr[i][j]){
            max = arr[i][j];
            }
        }
    }
    printf("%d",max);
    return 0;
}