#include<string.h>
#include<stdio.h>
int main ()
{
    int H,M,O,T,i;
    scanf("%d",&T);
        for(i=1;i<=T;i++)
        {
           scanf("%d%d%d",&H,&M,&O);
           if(O==1)
                printf("%02d:%02d - A porta abriu!\n",H,M);
            else
                printf("%02d:%02d - A porta fechou!\n",H,M);
        }
    return 0;
}
