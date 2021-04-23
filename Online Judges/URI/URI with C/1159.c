#include<stdio.h>
#include<math.h>
void main ()
{
    int N,X,Y,i,j,sum=0;
    for(;;)
        {
            scanf("%d",&X);
            if(X==0)
                break;
            for(j=X;j<(X+10);j++)
                if(j%2==0)
                    sum += j;
            printf("%d\n",sum);
            sum = 0;
        }

}
