#include<stdio.h>
void main ()
{
    int a,b,q,r;
    scanf("%d %d",&a,&b);
    for(r = 0; r< abs(b); r++)
    {
        if((a-r) % b == 0)
        {
            q = (a-r)/b;
            break;
        }
    }
    printf("%d %d\n",q,r);
}

