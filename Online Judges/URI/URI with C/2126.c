#include<stdio.h>
#include<string.h>
void main ()
{
    char N1[100];
    char N2[100];
    int i,j,k=0,len1,len2;
    int cs=0,count=0;

    while(scanf("%s%s",N1,N2)!=EOF)
    {
        len1 = strlen(N1);
        len2 = strlen(N2);
        cs++;
        j = 0;
        i = 0;
        count = 0;
        k = 0;
        for(;j<len2;)
        {
            if(N1[i]==N2[j])
            {
                j++;
                i++;
            }

            else
            {
                i = 0;
                j++;
            }

            if(i==len1)
            {
                k = j;
                count++;
                i=0;
            }

        }
        if(count==0)
            printf("Caso #%d:\nNao existe subsequencia\n",cs);
        else
            printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n",cs,count,k-len1+1);

    }

}
