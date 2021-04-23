#include<stdio.h>
void main ()
{
    int x[3],i,j,t,a,b,c;
    scanf("%d%d%d",&x[0],&x[1],&x[2]);
    a = x[0];
    b = x[1];
    c = x[2];
    for(i=0;i<3-1;i++)
        for(j=0;j<3-i-1;j++)
        {
            if(x[j]>x[j+1])
            {
                t = x[j];
                x[j] = x[j+1];
                x[j+1] = t;
            }
        }
    printf("%d\n%d\n%d\n",x[0],x[1],x[2]);
    printf("\n%d\n%d\n%d\n",a,b,c);
}
