#include<stdio.h>
void main ()
{
    int a,b,q,r,aa,qq,rr;
    scanf("%d %d",&a,&b);
    if(a>=0)
    {
        q = a/b;
        r = a%b;
    }
    else if(a<0)
    {
        aa = a * (-1);
        qq = aa/b;
        rr = aa%b;
        if(b>0)
            q = (qq + 1) * (-1);
        else if(b<0)
            q = (qq - 1) * (-1);
        r = a - (q * b);
    }
    printf("%d %d\n",q,r);
}
