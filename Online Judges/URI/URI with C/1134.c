#include<stdio.h>
void main ()
{
    int X;
    int A = 0,G = 0,D = 0;
    for(;;)
    {
        scanf("%d",&X);
        if(X<1 || X>4)
            continue;
        switch(X)
        {
            case 1:
                A++;
                break;
            case 2:
                G++;
                break;
            case 3:
                D++;
                break;
        }
        if(X==4)
            break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",A,G,D);
}


