#include <stdio.h>
#include <stdlib.h>
 
int main() {
    char N;
    float F,S,TOTAL;
    scanf("%s %f %f",&N,&F,&S);
    TOTAL=(F+((S*15)/100));
    printf("TOTAL = R$ %.2f\n",TOTAL);
 
    return 0;
}
