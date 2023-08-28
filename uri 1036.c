#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    float A,B,C,root1,root2,temp;
    scanf("%f %f %f",&A,&B,&C);
    temp = (B*B) - (4*A*C);

    if((A!=0) && (temp>=0)){
        root1 = ( -B+sqrt(temp))/(2*A);
        root2 = ( -B-sqrt(temp))/(2*A);
        printf("R1 = %.5f\nR2 = %.5f\n",root1,root2);
    }
    else{
        printf("Impossivel calcular\n");
    }

    return 0;
}
