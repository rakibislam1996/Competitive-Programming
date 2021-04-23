#include<stdio.h>
void main ()
{
    int a[100],max,loc;
    int i;
    for(i=0;i<100;i++)
        scanf("%d",&a[i]);
    max = a[0];
    loc = 0;
    for(i=1;i<100;i++)
        if(max<a[i])
            {
                max = a[i];
                loc = i;
            }
    printf("%d\n%d\n",max,loc+1);
}

