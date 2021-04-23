#include <stdio.h>
int main()
{

    double a,b = 0,media = 0;
    int n,cnt=0;

    while(1)
    {

        scanf("%lf",&a);
        //media = 0;
        if((a>=0.0 && a<=10.0))
        {
            b++;
            media = media + a;
        }
        else
        {
            printf("nota invalida\n");
        }
        if(b==2)
        {
            printf("media = %.2lf\n",media/2.00);
            media = 0;
            printf("novo calculo (1-sim 2-nao)\n");
            while(1)
            {

                scanf("%d",&n);
                if(n==1)
                {
                    b = 0;
                    break;
                }
                else if(n == 2) break;
                else
                {
                    printf("novo calculo (1-sim 2-nao)\n");
                  //  b = cnt ;
                    continue;
                }
            }
            if(n==2)break;
        }
    }
}
