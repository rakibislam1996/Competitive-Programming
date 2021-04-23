#include<stdio.h>
void main ()
{
    int X;
    float Y,con;
    while(scanf("%d %f",&X,&Y)!=EOF)
    {
        con = (float) X / Y;
        printf("%.3f km/l\n",con);
    }
}

