#include<stdio.h>
void main ()
{
    float a[6],ave,sum=0.0;
    int i,count = 0;

    for(i=0;i<6;i++)
        scanf("%f",&a[i]);
    for(i=0;i<6;i++)
        if(a[i]>0)
        {
            count++;
            sum += a[i];
        }
    ave  = sum / count;
    printf("%d valores positivos\n%.1f\n",count,ave);

}
