#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int X,Y;
    float p;
    scanf("%d%d",&X,&Y);
    switch(X)
    {
        case 1:
            p = Y * 4.00;
            printf("Total: R$ %.2f\n",p);
            break;
        case 2:
            p = Y * 4.50;
            printf("Total: R$ %.2f\n",p);
            break;
        case 3:
            p = Y * 5.00;
            printf("Total: R$ %.2f\n",p);
            break;
        case 4:
            p = Y * 2.00;
            printf("Total: R$ %.2f\n",p);
            break;
        case 5:
            p = Y * 1.50;
            printf("Total: R$ %.2f\n",p);
            break;
    }
}


