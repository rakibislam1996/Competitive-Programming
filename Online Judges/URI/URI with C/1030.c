#include <stdio.h>


int flavious(int x, int y)
{
    if(x == 1)
        return 0;
    return (flavious(x-1,y)+y)%x;
}

int remaining(int n, int k)
{
    int r = 0;
    int i;
    for (i = 2; i <= n; i++)
        r = (r + k) % i;

    return r;
}

int main()
{
    int n,i, x, y, j, num, pulo;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d %d",&x,&y);
        //printf("Case %d: %d\n",i+1,flavious(x,y)+1);
        printf("Case %d: %d\n",i+1,remaining(x,y)+1);
    }
    return 0;
}
