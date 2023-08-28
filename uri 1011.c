#include <stdio.h>
#include <stdlib.h>
 
int main() {
    const double pi=3.14159;
    int R;
    double VOLUME;
    scanf("%d",&R);
    VOLUME =(4.0/3)*pi*R*R*R;
    printf("VOLUME = %.3lf\n",VOLUME);
 
    return 0;
}
