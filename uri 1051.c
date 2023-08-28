#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,temp,result;

    scanf("%lf",&a);
    temp = a-2000.00;
    if(a>=0.00 && a<=2000.00)
        printf("Isento\n");
    else if(a>=2000.01 && a<=3000.00){
        result=temp*.08;
        printf("R$ %.2lf\n",result);
    }
    else if(a>=3000.01 && a<=4500.00){
        if(temp<=1000.00)
            result= temp*0.08;
        else{
            temp-=1000.00;
            result= (1000.00*0.08)+(temp*0.18);
        }
        printf("R$ %.2lf\n",result);
    }
    else{
        temp -= 1000.00;
        if(temp <= 1500.00)
            result = (1000.00*.08) +(temp*0.18);
        else{
            temp-=1500.00;
            result= (1000.00*.08)+(1500.00*0.18)+(temp*.28);
        }
        printf("R$ %.2lf\n",result);
    }

    return 0;
}
