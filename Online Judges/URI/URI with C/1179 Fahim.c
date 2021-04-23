#include <stdio.h>
int main()
{
    int par[5],impar[5];
    int i,j;
    int qp = 0,qi = 0;
    int x;

    for(i = 1; i<=15; i++)
    {
        scanf("%d",&x);
        if(x % 2 == 0)
         {
            par[qp] = x;
            qp++;
            if(qp==5)
            {
                for(j = 0; j<5; j++)
                {
                    printf("par[%d] = %d\n", j,par[j]);
                }
                  qp = 0;
            }
        }
       else
        {
            impar[qi] = x;
            qi++;
            if(qi==5)
            {
                for(j = 0; j<5; j++)
                {
                    printf("impar[%d] = %d\n", j,impar[j]);
                }
                  qi = 0;
            }
        }
    }
    for(j = 0; j<qi; j++)
    {
        printf("impar[%d] = %d\n", j,impar[j]);
    }
    for(j = 0; j<qp; j++)
    {
        printf("par[%d] = %d\n", j,par[j]);
    }
}
