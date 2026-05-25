#include<stdio.h>
int main(){
    int arr[3][3] = {23,4,64,23,35,76,23,36,68};
    int brr[3][3] = {98,2,85,43,42,64,25,7,54};
    int crr[3][3];
    // Matrix 1
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
    }
    printf("\n");

    // Matrix 2
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",brr[i][j]);
        }
    }
    printf("\n\n");

    // Addition
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            crr[i][j] = arr[i][j] + brr[i][j] ;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",crr[i][j]);
        }
    }
    printf("\n");


 
    return 0;
}