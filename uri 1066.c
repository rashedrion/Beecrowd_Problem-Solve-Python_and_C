#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    int i,e=0,o=0,p=0,n=0;
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(i=0;i<5;i++){
        if((a[i]%2)==0){
            e++;
        }
        else{
            o++;
        }
        if(a[i]>0)
            p++;
        if(a[i]<0)
            n++;
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);
    return 0;
}
