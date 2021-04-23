#include<stdio.h>
#include<math.h>
int main ()
{
    int A,B,C,area;
    for(;;)
    {
        scanf("%d %d %d",&A,&B,&C);
        if(A==0)
            break;
        area = sqrt(A*B*100/C);
        printf("%d\n",area);
    }
    return 0;
}

