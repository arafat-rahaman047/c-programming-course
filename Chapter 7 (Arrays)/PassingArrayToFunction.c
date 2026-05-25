#include<stdio.h> 
void change(int arr[5]){
    arr[2] = 10;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    
    printf("%d\n",arr[2]);
    change(arr);
    printf("%d\n",arr[2]);
    return 0;
}