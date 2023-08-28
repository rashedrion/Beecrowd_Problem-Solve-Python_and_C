#include <stdio.h>
#include <stdlib.h>

int main()
{
    char mounth[][10] = { "January" , "February" , "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" ,"December"};
    int a;
    scanf("%d",&a);
    if(a>=1 && a<=12){
        a--;
        printf("%s\n",mounth[a]);
    }
    return 0;
}
