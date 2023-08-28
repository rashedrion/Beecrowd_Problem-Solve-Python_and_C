#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    scanf("%f",&a);
    if(a>=0 && a<=100){
        if(a<=25.0){
            printf("Intervalo [0,25]\n");
        }
        else if(a<=50.0){
            printf("Intervalo (25,50]\n");
        }
        else if(a<=75.0){
            printf("Intervalo (50,75]\n");
        }
        else{
            printf("Intervalo (75,100]\n");
        }
    }
    else{
        printf("Fora de intervalo\n");
    }

    return 0;
}
