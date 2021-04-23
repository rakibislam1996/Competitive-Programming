#include<stdio.h>
int main()
{
    double a,b,m;
    int x;
    while(x!=2)
    {
    while(1)
    {
        scanf("%lf",&a);
        if(a>=0&&a<=10)
            break;
        else printf("nota invalida\n");
    }
     while(1)
    {
        scanf("%lf",&b);
        if(b>=0&&b<=10)
            break;
        else printf("nota invalida\n");
    }
    m=(a+b)/2;
    printf("media = %.2lf\n",m);
    while(1)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&x);
        if(x==1||x==2)
            break;
    }
    }
    return 0;
}
