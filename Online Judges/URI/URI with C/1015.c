#include<stdio.h>
#include<math.h>
void main ()
{
    double x1,y1,x2,y2,distace;
    while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)!=EOF)
    {
        distace = sqrt((pow((x1-x2),2))+(pow((y1-y2),2)));
        printf("%.4lf\n",distace);
    }
}
