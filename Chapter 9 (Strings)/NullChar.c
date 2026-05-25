#include<stdio.h>
int main(){
    // printf("Arafat Rahaman\0");
    char name[] = {'a','r','a','f','a','t','\0'};
    int n = sizeof(name)/sizeof(name[0]);
    for(int i=0;i<n;i++){
        printf("%c",name[i]);
    }
    printf("\n");
    return 0;
    char ch = '\0';
    printf("%c\n",ch);
    printf("%d\n",ch);
    // printf(sizeof(ch));
    return 0;
}