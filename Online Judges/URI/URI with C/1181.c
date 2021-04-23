#include<stdio.h>
void main ()
{
    double M[12][12],sum=0.0,ave;
    char ch[2];
    int i,j,L;
    scanf("%d",&L);
    scanf("%s",ch);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
            scanf("%lf",&M[i][j]);
            if(ch[0] =='S')
            {
                for(j=0,i=L;j<12;j++)
                    sum += M[i][j];
                printf("%.1lf\n",sum);
            }
            else if(ch[0] =='M')
            {
                for(j=0,i=L;j<12;j++)
                    sum += M[i][j];
                ave = sum / 12.0;
                printf("%.1lf\n",ave);
            }
}
