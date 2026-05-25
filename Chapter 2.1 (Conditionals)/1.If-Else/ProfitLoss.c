#include <stdio.h>
int main() {
    int cp;
    printf("Enter The Cost Price : ");
    scanf("%d",&cp);

    int sp;
    printf("Enter The Selling Price : ");
    scanf("%d",&sp);

    if(sp>cp) {
        printf("Profit is %d", sp-cp);
    }

    if(cp>sp) {
        printf("Loss is %d", cp-sp);
    };
    if(sp==cp) {
        printf("No Profit No Loss");
    };
    return 0;
}