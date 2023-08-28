#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,a,b=5,s=0;
    scanf("%d",&N);
    while(N!=0){
        while(b>0){
            if((N%2)==0){
                s+=N;
                N+=2;
            }
            else{
                N++;
                s+=N;
                N+=2;
            }
            b--;
        }
        printf("%d\n",s);
        s=0;
        b=5;
        scanf("%d",&N);
    }


    return 0;
}
