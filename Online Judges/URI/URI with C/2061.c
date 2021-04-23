#include<stdio.h>
void main ()
{
    int M,i;
    long long N;
    scanf("%llu %d",&N,&M);
    char fechou[10]= "fechou";
    char clicou[10]= "clicou";
    char a[10];
    for(i=1;i<=M;i++)
    {
        scanf("%s",a);
        if(strcmp(a,fechou)==0)
            N++;
        else if(strcmp(a,clicou)==0)
            N--;
    }
    printf("%llu\n",N);
}
