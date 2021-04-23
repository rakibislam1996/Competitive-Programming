#include<stdio.h>
void main()
{
    int N,C,i;
    char name[20];

    scanf("%d",&C);
    for(i=1;i<=C;i++)
    {
        scanf("%s %d",name,&N);
        if(strcmp(name,"Thor")==0)
            printf("Y\n");
        else
            printf("N\n");
    }
}


