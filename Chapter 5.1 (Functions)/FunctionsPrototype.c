#include <stdio.h>

void  England(){
    printf("You are in England\n");
    void Japan();
    Japan();
}

void  Japan(){
    printf("You are in Japan\n");
}

void India(){
    printf("You are in India\n");
    England();
}

int main(){
    printf("You are in main\n");
    void Bangladesh();
    Bangladesh();
}

void Bangladesh(){
    printf("You are in Bangladesh\n");
    India();
}