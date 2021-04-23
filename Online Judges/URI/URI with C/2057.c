#include<stdio.h>
#define PI 3.14
void main ()
{
    int S,T,F,time,t1;
    while(scanf("%d%d%d",&S,&T,&F)!=EOF)

    {
        time = S + T;


        if(time>=24)
        {
            t1 = (time - 24) + F ;
            if(t1<0)
                printf("%d\n",24+t1);
            else if(t1>=0)
                printf("%d\n",t1);
            else if(t1==24)
                printf("0\n");
        }
        else if(time<24)
        {
            t1 = time + F ;
            if(t1<0)
                printf("%d\n",24+t1);
            else if(t1>=0)
                printf("%d\n",t1);
            else if(t1==24)
                printf("0\n");
        }

    }
}

