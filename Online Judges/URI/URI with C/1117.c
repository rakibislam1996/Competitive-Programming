#include<stdio.h>
void main ()
{
    double n,a,b,ave;
    int c,X;
    int count = 0;
    for(;;)
    {
        scanf("%lf",&n);
        if(n<0 || n>10)
            {
                printf("nota invalida\n");
                continue;
            }
        count++;
        if(count==1)
            a = n;
        else if(count==2)
        {

            b = n;
            ave = (a+b)/2.0;
            printf("media = %.2lf\n",ave);
            break;
        }
    }
}
