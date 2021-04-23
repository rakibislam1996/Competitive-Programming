#include<stdio.h>
void main()
{
    int X,i,a;
    while(scanf("%d",&X)!=EOF)
        for(i=1;i<=X;i++)
        {
            scanf("%d",&a);
            if(a==0)
                printf("NULL\n");
            else if(a%2==0)
            {
                if(a<0)
                    printf("EVEN NEGATIVE\n");
                else if(a>0)
                    printf("EVEN POSITIVE\n");

            }
            else if(a%2!=0)
            {
                if(a<0)
                    printf("ODD NEGATIVE\n");
                else if(a>0)
                    printf("ODD POSITIVE\n");

            }

        }
}
