#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int A,B,C,D;
    scanf("%d%d%d%d",&A,&B,&C,&D);

    if((A+B)>C)
        if((A+C)>B)
            if((B+C)>A)
                {
                    printf("S\n");
                    exit(0);
                }
    if((A+B)>D)
        if((A+D)>B)
            if((B+D)>A)
                {
                    printf("S\n");
                    exit(0);
                }
    if((A+C)>D)
        if((A+D)>C)
            if((C+D)>A)
                {
                    printf("S\n");
                    exit(0);
                }
    if((C+B)>D)
        if((C+D)>B)
            if((B+D)>C)
                {
                    printf("S\n");
                    exit(0);
                }
    printf("N\n");
}
