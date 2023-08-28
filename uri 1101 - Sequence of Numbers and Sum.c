#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,s,temp,i;

    do{
        s=0;
        scanf("%d %d",&a,&b);
        if(a>0 && b>0){
             if(a>b){
                temp=a;
                a=b;
                b=temp;
            }
            for(i=a;i<=b;i++){
                printf("%d ",i);
                s+=i;
            }
            printf("Sum=%d\n",s);
        }
    }while(a>0 && b>0);
    return 0;
}
