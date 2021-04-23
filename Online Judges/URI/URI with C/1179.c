#include <stdio.h>
void main()
{
    int n[15],par[5],impar[5],i,j,k,c1=0,c2=0;

    for(i=0;i<15;i++)
        scanf("%d",&n[i]);
    for(i=0,j=0,k=0;i<15;i++)
    {
        if(n[i]%2==0)
            {
                par[j] = n[i];
                c1++;
                j++;
                if(c1==5)
                    {
                        for(j=0;j<5;j++)
                            printf("par[%d] = %d\n",j,par[j]);
                        j = 0;
                        c1 = 0;
                    }
            }
        else if(n[i]%2!=0)
            {
                impar[k] = n[i];
                c2++;
                k++;
                if(c2==5)
                    {
                        for(k=0;k<5;k++)
                            printf("impar[%d] = %d\n",k,impar[k]);
                        k = 0;
                        c2 = 0;
                    }

            }
    }

    for(i=0;i<c2;i++)
        printf("impar[%d] = %d\n",i,impar[i]);
    for(i=0;i<c1;i++)
        printf("par[%d] = %d\n",i,par[i]);

}
