#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,b,x,y;
    scanf("%d",&N);
    int a[N];
    for(b=0;b<N;b++)
        scanf("%d",&a[b]);
    x=a[0];
    y=0;
    for(b=1;b<N;b++){
        if(x>a[b]){
            x=a[b];
            y=b;

        }
    }
    printf("Menor valor: %d\n",x);
    printf("Posicao: %d\n",y);
    return 0;
}
