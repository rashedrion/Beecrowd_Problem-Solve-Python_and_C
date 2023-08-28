#include <stdio.h>
#include <stdlib.h>

int main()
{
    float I ,J=1.0;
    printf("I=0 J=1\n");
    printf("I=0 J=2\n");
    printf("I=0 J=3\n");
    for(I=0.2;I<1;I+=0.2){
        printf("I=%.1f J=%.1f\n",I,J+I);
        printf("I=%.1f J=%.1f\n",I,J+1+I);
        printf("I=%.1f J=%.1f\n",I,J+2+I);

    }
    printf("I=1 J=2\n");
    printf("I=1 J=3\n");
    printf("I=1 J=4\n");
    for(I=1.2;I<2;I+=0.2){
        printf("I=%.1f J=%.1f\n",I,J+I);
        printf("I=%.1f J=%.1f\n",I,J+1+I);
        printf("I=%.1f J=%.1f\n",I,J+2+I);

    }
    printf("I=2 J=3\n");
    printf("I=2 J=4\n");
    printf("I=2 J=5\n");

    return 0;
}
