#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,a,b,s=0;
    scanf("%d",&N);
    while(N>0){
        scanf("%d %d",&a,&b);
        while(b>0){
            if((a%2)!=0){
                s+=a;
                a+=2;
            }
            else{
                a++;
                s+=a;
                a++;
            }
            b--;
        }
        N--;
        printf("%d\n",s);
        s=0;
    }


    return 0;
}
