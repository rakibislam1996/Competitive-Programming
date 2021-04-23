#include <stdio.h>
void main()
{
    int L,X,i,level = 0;
    while(scanf("%d",&L)!=EOF)
        {
            for(i=1;i<=L;i++)
            {
                scanf("%d",&X);
                if(X<10 && level!=2 && level!=3)
                    level = 1;
                else if(X>=10 && X<20 && level!=3 )
                    level = 2;
                else if(X>=20)
                    level = 3;
            }
            printf("%d\n",level);
            level = 0;
        }
}
