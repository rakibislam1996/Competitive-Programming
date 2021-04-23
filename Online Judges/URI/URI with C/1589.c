#include <stdio.h>
void main()
{
    int T,R1,R2,i,R;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&R1,&R2);
        R = R1 + R2;
        printf("%d\n",R);
    }
}
