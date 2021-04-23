#include<stdio.h>
void main ()
{
    int a,b,i,d,e[12]={31,29,31,30,31,30,31,31,30,31,30,31},sum=0;
    while(scanf("%d%d",&a,&b)!=EOF)
    {if(a==12 && b==25)
        printf("E natal!\n");
    else if(a==12 && b==24)
        printf("E vespera de natal!\n");
    else if(a==12 && b>25)
        printf("Ja passou!\n");
    else
    {
        for(i=0;i<a-1;i++)
            sum += e[i];
        sum += b;
        printf("Faltam %d dias para o natal!\n",360-sum);
    }
    sum = 0;
    }
}
