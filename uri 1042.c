#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a,b,c,i,j,k,as[3];
    scanf("%d %d %d",&a,&b,&c);
    as[0]=a;
    as[1]=b;
    as[2]=c;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(as[j] > as[j+1]){
                k = as[j];
                as[j] = as[j+1];
                as[j+1]  =k;
            }
        }
    }
    for(i=0;i<3;i++){
        printf("%d\n",as[i]);
    }
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);


    return 0;
}
