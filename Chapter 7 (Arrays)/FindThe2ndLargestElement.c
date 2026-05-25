#include<stdio.h>
#include<limits.h>
int main(){
    int arr[] = {4,1,2,2,5,6,6,7,8,9,9};
    int n = sizeof(arr)/4;
    for (int  i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    // Finding Max
    int max = INT_MIN;
    for (int  i = 0; i < n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    printf("%d is The 1st Maximum Number\n",max);
    // Finding Max2
    int max2 = INT_MIN;
    for (int  i = 0; i < n; i++){
        if(arr[i]>max2 && max!=arr[i]){
            max2 = arr[i];
        }
    }
    printf("%d is The 2nd Maximum Number\n",max2);
    return 0;
}