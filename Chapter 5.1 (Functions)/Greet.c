#include <stdio.h>
void greet(){ // void is a Return type
    printf("Good Morning!\n");
    printf("How Are You?\n");
    return;
}
int main() {
    printf("This is Arafat.\n");
    greet(); //Calling the function
    printf("I am a CSE student.\n");
    return 0;
}