#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,temp,i;
    scanf("%d %d",&a,&b);
    if(a>b){
        temp =a;
        a=b;
        b=temp;
    }
    for(i=++a;i<b;i++){
        if((i%5)==2 || (i%5)==3 ){
           printf("%d\n",i);
        }
    }
    return 0;
}
