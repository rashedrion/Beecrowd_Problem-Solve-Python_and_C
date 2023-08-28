#include <stdio.h>
#include <stdlib.h>

int main()
{
    int po,number,temp,i=1;
    scanf("%d",&temp);
    po=1;
    for(i=2;i<=100;i++){
        scanf("%d",&number);
        if(number>temp){
           temp=number;
           po=i;
        }
    }
    printf("%d\n%d\n",temp,po);
    return 0;
}
