#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,b=0,c=0;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
        if(a[i]>=10 && a[i]<=20)
            b++;
        else
            c++;
    }
    printf("%d in\n%d out\n",b,c);
    return 0;
}
