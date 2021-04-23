#include<stdio.h>
void main ()
{
    int N;
    scanf("%d",&N);
    int l,i,j,X,Y,k,sum=0,s[N];
    for(l=1;l<=N;l++)
    {
        scanf("%d %d",&X,&Y);
        i = (X<Y)? X : Y;
        j = (X>Y)? X : Y;
        sum = 0;
        for(k=i+1;k<j;k++)
            if(k%2!=0)
                sum += k;
        s[l] = sum;

    }
    for(l=1;l<=N;l++)
        printf("%d\n",s[l]);
}
