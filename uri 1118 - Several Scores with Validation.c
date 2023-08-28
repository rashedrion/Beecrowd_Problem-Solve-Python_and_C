#include <stdio.h>
#include <stdlib.h>

void media(){
    int a=0;
    float b[3],temp;
    do{
        scanf("%f",&temp);
        if(temp>=0 && temp<=10){
            b[a]=temp;
            a++;
            if(a==2){
                temp=(b[0]+b[1])/2.0;
                printf("media = %.2f\n",temp);
            }
        }
        else
            printf("nota invalida\n");
    }while(a<2);

}

int main()
{
    int i;
    media();
    do{
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&i);
        if(i==1)
            media();
    }while(i!=2);
    return 0;
}
