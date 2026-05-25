#include <stdio.h>
int main(){
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    int hf = 1;
    for(int i=1; i<n ; i++) {
        if(n%i==0){
            hf = i;
        }
    }
    printf("The Highest Factor is : %d", hf);
    return 0;
}