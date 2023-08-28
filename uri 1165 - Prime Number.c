#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,a,i,t;
    scanf("%d",&x);
    while(x>0){
        x--;
        i=2;
        t=0;
        scanf("%d",&a);
        while(i<a){
            if(a%i == 0 ){
                printf("%d nao eh primo\n",a);
                t=1;
                break;
            }
            i++;
        }
        if(t==0)
            printf("%d eh primo\n",a);

    }


    return 0;
}
