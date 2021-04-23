#include<stdio.h>
void main ()
{
    int N,i,in=0,out=0,a[9999];
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        scanf("%d",&a[i]);
    for(i=1;i<=N;i++)
        {
            if(a[i]>=10 && a[i]<=20)
                in++;
            else
                out++;
        }
    printf("%d in\n%d out\n",in,out);
}
