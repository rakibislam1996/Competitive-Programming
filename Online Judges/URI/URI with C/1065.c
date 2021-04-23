#include<stdio.h>
void main ()
{
    int a[5];
    int i,pos=0,neg=0,even=0,odd=0;

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
        {
            if(a[i]%2==0)
                even++;
            if(a[i]%2!=0)
                odd++;
            if(a[i]>0)
                pos++;
            if(a[i]<0)
                neg++;
        }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,odd,pos,neg);

}
