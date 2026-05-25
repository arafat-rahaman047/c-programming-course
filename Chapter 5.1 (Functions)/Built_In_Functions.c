#include <stdio.h>
#include <math.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);

   // printf("%f\n",sqrt(x));
   // printf("%f\n",cbrt(x));

    int p = pow(x,y);
    printf("%d",p);

    return 0;
}