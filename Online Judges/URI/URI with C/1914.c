#include<stdio.h>
void main ()
{
    int QT,N,M,i,sum;
    char n1[100],n2[100],ch1[10],ch2[10];
    scanf("%d",&QT);
    for(i=1;i<=QT;i++)
    {
        scanf("%s %s %s %s",n1,ch1,n2,ch2);
        scanf("%d %d",&N,&M);
        sum = N + M;
        if(sum%2==0)
        {
            if(strcmp(ch1,"PAR")==0)
                printf("%s\n",n1);
            else
                printf("%s\n",n2);
        }
        else
        {
            if(strcmp(ch1,"IMPAR")==0)
                printf("%s\n",n1);
            else
                printf("%s\n",n2);
        }
    }
}
