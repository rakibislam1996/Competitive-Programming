#include <stdio.h>
int main()
{
    int N,sum=0,count=0;
    float ave;
    for(;;)
    {
        scanf("%d",&N);
        if(N<0)
            break;
        sum += N;
        count++;
    }
    ave = (float)sum / (float)count;
    printf("%.2f\n",ave);
}
