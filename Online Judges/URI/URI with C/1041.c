#include<stdio.h>
void main ()
{
    float X,Y;
    while(scanf("%f %f",&X,&Y)!=EOF)
    {
        if(X==0.0 && Y==0.0)
            printf("Origem\n");
        else if(X==0.0)
            printf("Eixo Y\n");
        else if(Y==0.0)
            printf("Eixo X\n");
        else
        {
            if(X<0.0 && Y<0.0)
                printf("Q3\n");
            else if(X<0.0)
                printf("Q2\n");
            else if(Y<0.0)
                printf("Q4\n");
            else
                printf("Q1\n");
        }

    }
}
