#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,s=0,temp,N,i;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d %d",&a,&b);
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }
        for(temp=++a;temp<b;temp++){
            if((temp%2)!=0)
                s=s+temp;
        }
        printf("%d\n",s);
        s=0;
    }


    return 0;
}
