#include <stdio.h>
 
int main() {
    int a,b,m,n;
    float x,y,result;
    scanf("%d %d %f",&a,&b,&x);
    scanf("%d %d %f",&m,&n,&y);
    result = b*x + n*y;
    printf("VALOR A PAGAR: R$ %.2f\n",result);
 
    return 0;
}
