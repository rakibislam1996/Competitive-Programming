#include<stdio.h>
void main ()
{
    long long int N,i,j,sum=0,count=0,a=0,b;
    scanf("%lld",&N);
    long long int X[N];
    for(i=0;i<N;i++)
        scanf("%lld",&X[i]);
    for(i=0;i<N;)
    {
            if(i>=0 && X[i]%2!=0)
            {
                X[i]--;
                i++;
                count++;
            }
            else if(i>=0 && X[i]%2==0)
            {
                if(X[i]==0)
                    i--;
                else
                {
                    X[i]--;
                    i--;
                }
            }
            else if(i<0)
            {
                count++;
                break;
            }
    }
    for(i=0;i<N;i++)
        sum += X[i];
    printf("%lld %lld\n",count,sum);

}
