#include<stdio.h>
int main(){
    int arr[5][5];
    // Store 10 in Every Cell
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            arr[i][j] = 10;
        }
    }
    printf("\n");
    // Print The Array
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n"); 
    return 0;
}