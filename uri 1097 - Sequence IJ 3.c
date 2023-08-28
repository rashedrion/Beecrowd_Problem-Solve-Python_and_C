#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I ,J=7;
    for(I=1;I<=9;I+=2,J+=2){
        printf("I=%d J=%d\n",I,J);
        printf("I=%d J=%d\n",I,J-1);
        printf("I=%d J=%d\n",I,J-2);
    }
    return 0;
}
