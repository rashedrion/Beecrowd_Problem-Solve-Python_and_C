#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,m1,m2,nz;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    m1= ((n1*2.0)+(n2*3.0)+(n3*4.0)+(n4*1.0))/(2.0+3.0+4.0+1.0);
    printf("Media: %.1f\n",m1);

    if(m1>=7.0)
        printf("Aluno aprovado.\n");
    else if (m1<5.0)
        printf("Aluno reprovado.\n");
    else{
        printf("Aluno em exame.\n");
        scanf("%f",&nz);
        printf("Nota do exame: %.1f\n",nz);
        m2=(m1+nz)/2.0;
        if(m2>=5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n",m2);
    }

    return 0;
}
