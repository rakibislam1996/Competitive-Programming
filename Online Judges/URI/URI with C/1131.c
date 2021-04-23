#include<stdio.h>
void main ()
{
    int x,y,a,tx=0,ty=0,tie=0,game=0;
    int count = 0;
    for(;;)
    {
        scanf("%d %d",&x,&y);
        game++;
        if(x>y)
            tx++;
        else if(x<y)
            ty++;
        else if(x==y)
            tie++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&a);
        if(a==1)
            continue;
        else if(a==2)
            break;
    }
    printf("%d grenais\n",game);
    printf("Inter:%d\n",tx);
    printf("Gremio:%d\n",ty);
    printf("Empates:%d\n",tie);
    if(tx>ty)
        printf("Inter venceu mais\n");
    else if(tx<ty)
        printf("Gremio venceu mais\n");
    else if(tx==ty)
        printf("Nao houve vencedor\n");
}
