#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,a[4],b,c,d;
    //char str[2]="S",str1[2]="N";
    for(i=0; i<4; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<4; i++)
    {
        for(j=i; j<4; j++)
        {
            if(a[i]>a[j+1])
            {
                b=a[j+1];
                a[j+1]=a[i];
                a[i]=b;
            }
        }
    }
    if(a[3]<a[2]+a[1] || a[2]<a[1]+a[0])
        printf("S\n");
    else
        printf("N\n");
    return 0;
}
