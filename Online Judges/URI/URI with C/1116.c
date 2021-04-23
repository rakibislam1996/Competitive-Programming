#include<stdio.h>
void main ()
{
    int N,X,Y,i;
    float div;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d%d",&X,&Y);
        if((X==0 && Y==0) || Y==0)
            printf("divisao impossivel\n");
        else
        {
            div = (float)X / (float)Y ;
            printf("%.1f\n",div);
        }
    }

}
