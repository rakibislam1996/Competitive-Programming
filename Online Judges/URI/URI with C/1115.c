#include<stdio.h>
void main ()
{
    int X,Y;

    for(;;)
    {
        scanf("%d%d",&X,&Y);
        if(X==0 || Y==0)
            break;
        else
        {
            if(X<0 && Y<0)
                printf("terceiro\n");
            else if(X<0)
                printf("segundo\n");
            else if(Y<0)
                printf("quarto\n");
            else
                printf("primeiro\n");
        }
    }

}
