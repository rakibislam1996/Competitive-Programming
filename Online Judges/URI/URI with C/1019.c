#include<stdio.h>
void main ()
{
    int N,hour,min;
    float M,sec;
    while(scanf("%d",&N)!=EOF)
    {
        hour =  N/3600;
        M =  (float)N/3600;
        M = M - hour;
        min = (int)(M * 60);
        M = M * 60;
        M = M - min;
        sec =  (M * 60);
        printf("%d:%d:%.f\n",hour,min,sec);

    }
}
