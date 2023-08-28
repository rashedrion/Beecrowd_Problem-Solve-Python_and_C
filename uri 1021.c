#include <stdio.h>
 
int main() {
 
    double n,v[]={100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int p=0,c;
    scanf("%lf",&n);
    if(n>=0 && n<=1000000.00){
            printf("NOTAS:\n");
            n+=1e-9;
            while(v[p]>=0.01){
                c=0;
                while(n>=v[p]){
                    n-=v[p];
                    c++;
                }
                if (v[p]==1.00){
                    printf("MOEDAS:\n");
                }
                if(v[p]>=2.00){
                    printf("%d nota(s) de R$ %.2lf\n",c,v[p]);
                }else{
                    printf("%d moeda(s) de R$ %.2lf\n",c,v[p]);
                }
                p++;



            }
    }
 
    return 0;
}
