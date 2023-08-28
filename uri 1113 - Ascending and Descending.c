#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    do{
        scanf("%d %d",&a,&b);
        if(a!=b){
            if(a<b)
                printf("Crescente\n");
            else
                printf("Decrescente\n");
        }
    }while(a!=b);
    return 0;
}
