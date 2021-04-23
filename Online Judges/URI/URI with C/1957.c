#include <stdio.h>
#include <string.h>
void main ()
{
    int V,i,remainder,r,hex[10],len,count=0;
    scanf("%d", &V);


    for(i=0;V>0;i++)
    {
        r = V % 16;
        hex[i] = r;
        V = V/16;
        count++;
    }

    for(i=count-1;i>=0;i--)
    {

        if(hex[i]>9)
        {
            if(hex[i] == 10)
                printf("A");
            else if(hex[i] == 11)
                printf("B");
            else if(hex[i] == 12)
                printf("C");
            else if(hex[i] == 13)
                printf("D");
            else if(hex[i] == 14)
                printf("E");
            else if(hex[i] == 15)
                printf("F");

        }
        else
            printf("%d",hex[i]);
    }
    printf("\n");

}
