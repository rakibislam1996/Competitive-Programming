#include <stdio.h>
void main()
{
    int PA,PB,T,i,y=0;
    double G1,G2;

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
        while(PA<=PB)
        {
            PA = PA + ((PA * G1)/100);
            PB = PB + ((PB * G2)/100);
            y++;
        }
        if(y>100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n",y);
        y = 0;
    }
}
