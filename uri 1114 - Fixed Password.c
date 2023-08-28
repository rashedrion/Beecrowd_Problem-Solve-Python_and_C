#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=2002;
    do{
        scanf("%d",&a);
            if(a==b)
                printf("Acesso Permitido\n");
            else
                printf("Senha Invalida\n");
    }while(a!=b);
    return 0;
}
