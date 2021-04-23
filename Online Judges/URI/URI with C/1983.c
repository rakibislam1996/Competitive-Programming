#include<stdio.h>
void main ()
{
    long long int n,i,j,reg;
    scanf("%lld",&n);
    long long int m[n];
    double note[n],hnote;
    for(i=0;i<n;i++)
        scanf("%lld %lf",&m[i],&note[i]);
    reg = m[0];
    hnote = note[0];
    for(i=1;i<n-1;i++)
    {
            if(hnote<note[i])
            {
                reg = m[i];
                hnote = note[i];
            }
    }
    if(hnote>=8)
        printf("%lld\n",reg);
    else
        printf("Minimum note not reached\n");

}
