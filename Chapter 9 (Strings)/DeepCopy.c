#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Arafat";
    char ptr[10];
    strcpy(ptr,str); // Deep Copy
    printf("1. %s\n",str);
    printf("2. %s\n",ptr);

    str[0] = 'B';
    printf("3. %s\n",str);
    printf("4. %s\n",ptr);
    return 0;
}