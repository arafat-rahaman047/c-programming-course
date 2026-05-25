#include<stdio.h>
int main(){
    char str[] = "Arafat";
    char* ptr = str; // Shallow Copy
    printf("%s\n",str);
    printf("%s\n",ptr);

    str[0] = 'B';
    printf("%s\n",str);
    printf("%s\n",ptr);

    return 0;
}