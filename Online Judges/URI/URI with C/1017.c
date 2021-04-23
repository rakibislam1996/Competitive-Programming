#include<stdio.h>
void main ()
{
    int hour,speed;
    float litre = 12;
    while(scanf("%d %d",&hour,&speed)!=EOF)
    {
        litre = (float)(hour * speed)/litre;
        printf("%.3f\n",litre);
    }
}
