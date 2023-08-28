#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,g=0,d=0,i;
    do{
        scanf("%d",&i);
        if(i==1)
            a++;
        else if(i==2)
            g++;
        else if(i==3)
            d++;
    }while(i!=4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);

    return 0;
}
