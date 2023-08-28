#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[13],b[13],c[13],ver[]="vertebrado",av[]="ave",car[]="carnivoro",oni[]="onivoro",mam[]="mamifero",her[]="herbivoro", inv[]="invertebrado",ins[]="inseto",hem[]="hematofago",ane[]="anelideo";
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    if((strcmp(a,ver)==0) && (strcmp(b,av)==0) && (strcmp(c,car)==0) )
        printf("aguia\n");
    if((strcmp(a,ver)==0) && (strcmp(b,av)==0) && (strcmp(c,oni)==0))
        printf("pomba\n");
    if((strcmp(a,ver)==0) && (strcmp(b,mam)==0) && (strcmp(c,oni)==0))
        printf("homem\n");
    if((strcmp(a,ver)==0) && (strcmp(b,mam)==0) && (strcmp(c,her)==0))
        printf("vaca\n");
    if((strcmp(a,inv)==0) && (strcmp(b,ins)==0) && (strcmp(c,hem)==0))
        printf("pulga\n");
    if((strcmp(a,inv)==0) && (strcmp(b,ins)==0) && (strcmp(c,her)==0))
        printf("lagarta\n");
    if((strcmp(a,inv)==0) && (strcmp(b,ane)==0) && (strcmp(c,hem)==0))
        printf("sanguessuga\n");
    if((strcmp(a,inv)==0) && (strcmp(b,ane)==0) && (strcmp(c,oni)==0))
        printf("minhoca\n");
    return 0;
}
