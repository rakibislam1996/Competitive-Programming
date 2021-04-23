#include<stdio.h>
#include<string.h>
void main ()
{
    int N,i,j,len;
    char ch[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    len = strlen(ch);
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("%c",ch[i]);
    }
    printf("\n");
}
