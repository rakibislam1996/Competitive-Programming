#include<stdio.h>
void main ()
{
    int N,i,two=0,three=0,four=0,five=0;
    scanf("%d",&N);
    int L[N];

    for(i=0;i<N;i++)
        scanf("%d",&L[i]);
    for(i=0;i<N;i++)
    {
        if(L[i]%2==0)
            two++;
        if(L[i]%3==0)
            three++;
        if(L[i]%4==0)
            four++;
        if(L[i]%5==0)
            five++;
    }
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",two,three,four,five);
}
