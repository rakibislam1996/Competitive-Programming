#include<stdio.h>
void main()
{
    int A,B,C,D;
    while(scanf("%d%d%d%d",&A,&B,&C,&D)!=EOF)
    {
        if(A%2!=0)
            printf("Valores nao aceitos\n");
        else if(C<0 || D<0)
            printf("Valores nao aceitos\n");
        else if((C+D)<=(A+B))
            printf("Valores nao aceitos\n");
        else if(B<=C || D<=A)
            printf("Valores nao aceitos\n");
        else
            printf("Valores aceitos\n");
    }

}
