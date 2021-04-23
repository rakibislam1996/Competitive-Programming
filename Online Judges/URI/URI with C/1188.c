#include<stdio.h>
void main ()
{
    double M[12][12],sum=0.0,ave;
    char O[2];
    int i,j,k;
    scanf("%s",O);
    for(i=0;i<12;i++)
        for(j=0;j<12;j++)
            scanf("%lf",&M[i][j]);
    if(O[0] =='S')
    {
        for(i=7,k=2;i<=11;i++,k += 2)
            for(j=i-k;j<=i-1;j++)
                sum += M[i][j];
        printf("%.1lf\n",sum);
    }
    else if(O[0] =='M')
    {
        for(i=7,k=2;i<=11;i++,k += 2)
            for(j=i-k;j<=i-1;j++)
                sum += M[i][j];
        ave = sum / 30.0;
        printf("%.1lf\n",ave);
    }
}
