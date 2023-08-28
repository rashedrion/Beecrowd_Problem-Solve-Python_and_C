#include <stdio.h>
#include <stdlib.h>

void parp(int j,int pa[]){
    int i;
    for(i=0;i<j;i++)
        printf("par[%d] = %d\n",i,pa[i]);
}
void imparp(int z ,int im[]){
    int i;
    for(i=0;i<z;i++)
        printf("impar[%d] = %d\n",i,im[i]);
}

int main()
{
    int i,j=0,z=0,k,l=15,pa[5],im[5];
    while(l>0){
        l--;
        scanf("%d",&k);
        if(k%2 == 0){
            pa[j]=k;
            j++;
            if(j==5){
               parp(j,pa);
               j=0;
            }
        }
        else{
            im[z]=k;
            z++;
            if(z==5){
                imparp(z,im);
                z=0;
            }
        }
    }
    imparp(z,im);
    parp(j,pa);
    return 0;
}
