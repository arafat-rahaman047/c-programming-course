#include <stdio.h>
void oddEven(int x){ // int x is a Argument/Parameters
    if(x%2==0){
        printf("%d is a Evan number",x);
    }
    else {
        printf("%d is a Odd number",x);
    }
}
int main(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a); // Pass by Value
    oddEven(a);
    return 0;
}