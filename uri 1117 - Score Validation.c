#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    float b[3],temp;
    do{
        scanf("%f",&temp);
        if(temp>=0 && temp<=10){
            b[a]=temp;
            a++;
        }
        else
            printf("nota invalida\n");
    }while(a<2);
    temp=(b[0]+b[1])/2.0;
    printf("media = %.2f\n",temp);

    return 0;
}
