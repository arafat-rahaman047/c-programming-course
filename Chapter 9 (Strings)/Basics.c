#include<stdio.h>
int main(){
    char name[] = {'a','r','a','f','a','t'};
    int n = sizeof(name)/sizeof(name[0]);
    for(int i=0;i<n;i++){
        printf("%c",name[i]);
    }
    printf("\n");
    return 0;
}