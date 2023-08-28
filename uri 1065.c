#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5];
    int i,j=0;
    scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(i=0;i<5;i++){
        if((a[i]%2)==0){
            j++;
        }
    }
    printf("%d valores pares\n",j);
    return 0;
}
