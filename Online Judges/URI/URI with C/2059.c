#include<stdio.h>
#define PI 3.14
void main ()
{
    int p,j1,j2,r,a,sum;
    while(scanf("%d%d%d%d%d",&p,&j1,&j2,&r,&a)!=EOF)

    {
        sum = j1 + j2;

        if(r==1)
        {
            if(a==0)
                printf("Jogador 1 ganha!\n");
            else
                printf("Jogador 2 ganha!\n");
        }
        else if(r==0 && a==1)
            printf("Jogador 1 ganha!\n");

        else
        {
            if(sum%2==0)
                {
                    if(p==1)
                        printf("Jogador 1 ganha!\n");
                    else
                        printf("Jogador 2 ganha!\n");
                }
            else
                {
                    if(p==0)
                        printf("Jogador 1 ganha!\n");
                    else
                        printf("Jogador 2 ganha!\n");
                }
        }

    }
}

