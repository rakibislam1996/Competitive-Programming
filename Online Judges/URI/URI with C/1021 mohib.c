#include<stdio.h>
int main()
{
    double v,E,A;
    int a,b,c,d,e,f,g,B,m,n,o,p,q,r,s,t,u;
    scanf("%lf", &v);
    A=v;
    a=v/100;
    v=v-a*100;
    b=v/50;
    v-=b*50;
    c=v/20;
    v-=c*20;
    d=v/10;
    v-=d*10;
    e=v/5;
    v-=e*5;
    f=v/2;
    v-=f*2;
    g=v/1;

    E=A*100;

    B=(int) E;
    m=B%100;
    n=m/50;
    o=m%50;
    p=o/25;
    q=o%25;
    r=q/10;
    s=q%10;
    t=s/5;
    u=s%5;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n", a,b,c,d,e,f);
    printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", g,n,p,r,t,u);
    return 0;
}
