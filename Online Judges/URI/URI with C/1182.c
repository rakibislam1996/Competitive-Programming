#include<stdio.h>
void main ()
{
    double M[12][12],sum=0.0,ave;
    char T[2];
    int i,j,C;
    scanf("%d",&C);
    scanf("%s",T);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
            scanf("%lf",&M[i][j]);
    if(T[0] =='S')
    {
        for(j=C,i=0;i<12;i++)
            sum += M[i][j];
        printf("%.1lf\n",sum);
    }
    else if(T[0] =='M')
    {
        for(j=C,i=0;i<12;i++)
            sum += M[i][j];
        ave = sum / 12.0;
        printf("%.1lf\n",ave);
    }
}
