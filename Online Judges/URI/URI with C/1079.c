#include<stdio.h>
void main ()
{
    int N;
    float sum=0.0,ave,b[3];
    int i,j;
    b[0] = 2;
    b[1] = 3;
    b[2] = 5;
    scanf("%d",&N);
    float a[N][3];
    for(i=0;i<N;i++)
        for(j=0;j<3;j++)
            scanf("%f",&a[i][j]);
    for(i=0;i<N;i++)
    {
            sum = 0.0;
            for(j=0;j<3;j++)
            {
                sum = sum + (a[i][j] * b[j]);
            }
        ave = sum / 10.0;
        printf("%.1f\n",ave);
    }
}

