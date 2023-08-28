#include <stdio.h>
 
int main() {
    double A,B,Aw,Bw,MEDIA;
    Aw=3.5;
    Bw=7.5;
    scanf("%lf %lf",&A,&B);
    MEDIA=(((A*Aw)+(B*Bw))/(Aw+Bw));
    printf("MEDIA = %.5lf\n",MEDIA);
 
    return 0;
}
