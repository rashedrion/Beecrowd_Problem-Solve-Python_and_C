#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X,i=0,j;
    scanf("%d",&X);
    if((X%2)!=0){
        printf("%d\n",X);
        for(i=2;i<=10;i+=2){
            printf("%d\n",X+i);
        }
    }
    else{
        for(i=0;i<=5;i++){
            printf("%d\n",X+((2*i)+1));
        }
    }
    return 0;
}
