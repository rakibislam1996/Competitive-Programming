#include<string.h>
#include<stdio.h>
int main ()
{
    int C,len,i;
    double t;
    scanf("%d",&C);
    char s[10001];
        for(i=1;i<=C;i++)
        {
           scanf("%s",s);
           len  = strlen(s);
           t = len * 0.01;
           printf("%.2lf\n",t);
        }
    return 0;
}
