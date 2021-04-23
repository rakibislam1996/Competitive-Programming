#include <stdio.h>
int main()
{
    int A,X;
    int sum = 0;
    scanf("%d %d",&A,&X);

    while(X<=0)
        scanf("%d",&X);
    int i;

    for(i = 1;i<=X;i++)
    {
        sum = sum + A;
        A++;
    }
    printf("%d\n",sum);
}
