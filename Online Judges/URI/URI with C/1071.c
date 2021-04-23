#include<stdio.h>
void main ()
{
    int i,j,a,b,k,sum=0;
    scanf("%d %d",&a,&b);


        i = (a<b)? a : b;
        j = (a>b)? a : b;

        for(k=i+1;k<j;k++)
            if(k%2!=0)
                sum += k;
        printf("%d\n",sum);
}
