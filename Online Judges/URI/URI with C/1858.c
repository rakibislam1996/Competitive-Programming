#include<stdio.h>
void main ()
{
    int N,i,j,loc,mini;
    scanf("%d",&N);
    int T[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&T[i]);
    }
    loc = 0;
    mini = T[0];
    for(i=1;i<N;i++)
    {
        if(mini>T[i])
        {
            mini = T[i];
            loc = i;
        }
    }
    printf("%d\n",loc+1);

}

