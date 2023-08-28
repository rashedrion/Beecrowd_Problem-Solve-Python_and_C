#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,PA,PB,Y;
    double GA,GB;
    scanf("%d",&T);
    while(T>0){
        Y=0;
        scanf("%d %d %lf %lf",&PA,&PB,&GA,&GB);
        while(PA<=PB){
            Y++;
            PA=PA +(int)((GA*(double)PA)/100.00);
            PB=PB +(int)((GB*(double)PB)/100.00);
            if(Y>100){
                printf("Mais de 1 seculo.\n");
                break;
            }

        }
        if(Y<=100)
            printf("%d anos.\n",Y);
        T--;
    }

    return 0;
}
