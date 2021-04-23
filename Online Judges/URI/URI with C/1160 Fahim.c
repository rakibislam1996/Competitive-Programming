#include <stdio.h>
int main()
{
    int PA,PB;
    int PA1,PB1;
    int Addppl ;
    int Addppl2;
    double GA,GB;
    int yr  ;
    int cnt ;
    int T;
    scanf("%d" ,&T);
    int i;
    for(i = 1;i<=T;i++)
    {
        scanf("%d%d%lf%lf", &PA, &PB, & GA, &GB);
        PA1 = PA;
        PB1 = PB;
        Addppl = 0;
        Addppl2 = 0;
        yr = 0 ;
        while(PA1<= PB1)
        {
            PA1 =  PA1 + Addppl;
            PB1 =  PB1 + Addppl2;
            Addppl = (GA*PA1)/100;
            Addppl2 = (GB*PB1)/100;
            yr++;
        }
        yr = yr-1;
        if(yr>100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n",yr);
    }
}
