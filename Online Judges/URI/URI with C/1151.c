#include <stdio.h>
int main()
{
    int N,a=0,b=1,f,i;
    int sum = 0,count=0;
    scanf("%d",&N);
    printf("%d %d ",a,b);
    for(i=1;i<=N-2;i++)
    {
        f = a + b;
        if(i==(N-2))
            printf("%d\n",f);
        else
            printf("%d ",f);
        a = b;
        b = f;
    }
}
