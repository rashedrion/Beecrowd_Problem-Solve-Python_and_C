#include <stdio.h>
 
int main() {
 
    float A,B,C,Aw,Bw,Cw,MEDIA;
    Aw=2;
    Bw=3;
    Cw=5;
    scanf("%f %f %f",&A,&B,&C);
    if(A>=0 && A<=10 ){
        if(B>=0 && B<=10){
            if(C>=0 && C<=10){
                    MEDIA=(((A*Aw)+(B*Bw)+(C*Cw))/(Aw+Bw+Cw));
                    printf("MEDIA = %.1f\n",MEDIA);

            }
        }
   }

 
    return 0;
}
