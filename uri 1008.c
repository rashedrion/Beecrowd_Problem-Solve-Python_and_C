#include <stdio.h>
 
int main() {
    int a,b;
    float c,SALARY;
    scanf("%d %d %f",&a,&b,&c);
    SALARY = b*c;
    printf("NUMBER = %d\n",a);
    printf("SALARY = U$ %.2f\n",SALARY);
 
    return 0;
}
