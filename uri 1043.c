#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B,C;
    scanf("%f %f %f",&A,&B,&C);
    if((A+B)>C && (B+C)>A && (C+A)>B)
        printf("Perimetro = %.1f\n",A+B+C);
    else
        printf("Area = %.1f\n",(C*(A+B))/2);
    return 0;
}
