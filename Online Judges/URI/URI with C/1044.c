#include<stdio.h>
void main ()
{
    int A,B;
    while(scanf("%d %d",&A,&B)!=EOF)
    {
        if((A%B)==0 || (B%A)==0)
            {
                printf("Sao Multiplos\n");
            }
        else
        {
            printf("Nao sao Multiplos\n");
        }
    }
}
