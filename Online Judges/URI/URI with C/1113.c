
#include<stdio.h>
void main ()
{
    int l,i,j,X,Y,k;

    for(;;)
    {
        scanf("%d %d",&X,&Y);
        if(X!=Y)
        {
            if(X>Y)
                printf("Decrescente\n");
            else
                printf("Crescente\n");
        }
        else
            break;
    }

}
