#include <stdio.h>
void main()
{
    float A[100];
    int i;
    for(i=0;i<100;i++)
        scanf("%f",&A[i]);
    for(i=0;i<100;i++)
        {
            if(A[i]<=10)
                printf("A[%d] = %.1lf\n",i,A[i]);
        }
}
