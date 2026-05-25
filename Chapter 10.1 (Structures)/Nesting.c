#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int speed;
        int attack;
        char type[10];
    } pokemon;

    typedef struct legendaryPokemon{
        pokemon p1;
        char ability[10];
    }legendaryPokemon;
    
    pokemon pikachu = {100,70,"Electric"};
    pokemon charizerd = {80,120,"Fire"};
    
    legendaryPokemon mewtwo;
    mewtwo.p1.attack = 130;
    mewtwo.p1.speed = 150;
    strcpy(mewtwo.p1.type,"psychic");
    strcpy(mewtwo.ability,"pressure");

    return 0;
}