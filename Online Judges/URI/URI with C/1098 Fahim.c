#include <stdio.h>
int main()
{
    double i;
    int j;
    int k;

    for(i = 0.0; i< 2.0 ; i = i+0.2)
    {
        for(j = 1; j<=3; j++)
        {
            k =i+0.000001;

            if(i - k  <=0.000001)
            {
                printf("I=%d ",k);
                printf("J=%.0lf\n",i+j);
            }
            else printf("I=%.1lf J=%.1lf\n",i,i+j);
        }

    }

}
