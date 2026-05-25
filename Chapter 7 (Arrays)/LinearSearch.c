#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int x = 5;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            flag = true;
            break;
        }
    }
    
    if(flag==true){
        printf("Exists!");
    }
    else{
        printf("Does not Exists");
    }

    return 0;
}