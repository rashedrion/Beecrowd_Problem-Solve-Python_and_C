#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[3],k,A,B,C;
    int i,j;
    scanf("%lf %lf %lf",&a[0],&a[1],&a[2]);
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(a[j]<a[j+1]){
                k=a[j+1];
                a[j+1]=a[j];
                a[j]=k;
            }
        }
    }
    A=a[0];
    B=a[1];
    C=a[2];
    if(A>=(B+C))
        printf("NAO FORMA TRIANGULO\n");

    else{
        if((A*A)==((B*B)+(C*C)))
            printf("TRIANGULO RETANGULO\n");
        if((A*A)>((B*B)+(C*C)))
            printf("TRIANGULO OBTUSANGULO\n");
        if((A*A)<((B*B)+(C*C)))
            printf("TRIANGULO ACUTANGULO\n");
        if(A==B && B==C)
            printf("TRIANGULO EQUILATERO\n");
        if(A==B || B==C || C==A){
            if(A!=B || B!=C || C!=A)
                printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
