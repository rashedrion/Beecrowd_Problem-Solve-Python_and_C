#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,A,S,I;
    scanf("%d",&N);
    while(N>0){
        N--;
        S=0;
        scanf("%d",&A);
        for(I=1;I<A;I++){
            if(A%I ==0)
                S+=I;
        }
        if(S==A)
            printf("%d eh perfeito\n",A);
        else
            printf("%d nao eh perfeito\n",A);
    }
    return 0;
}
