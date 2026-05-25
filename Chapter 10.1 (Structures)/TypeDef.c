#include<stdio.h>
#include<string.h>
int main(){
    typedef struct car{
        int price;
        float topspeed;
        char segment[15];
    }car;

    car c1;
    c1.price = 1000000;
    c1.topspeed = 200;
    strcpy(c1.segment,"Sedan");

    car c2;
    c2.price = 2000000;
    c2.topspeed = 400;
    strcpy(c1.segment,"Hatch");

    return 0;
}