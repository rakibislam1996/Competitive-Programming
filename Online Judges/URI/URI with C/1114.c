#include<stdio.h>
void main ()
{
    int X;

    for(;;)
    {
        scanf("%d",&X);
        if(X!=2002)
            printf("Senha Invalida\n");
        else
            {
                printf("Acesso Permitido\n");
                break;
            }
    }

}
