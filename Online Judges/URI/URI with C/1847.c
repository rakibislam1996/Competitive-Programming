#include<stdio.h>
void main ()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);

        if(A>B && (C>B || C==B))
            printf(":)\n");
        else if(B>A && (B>C || B==C))
            printf(":(\n");
        else if(B>A && C>B && ((C-B)<(B-A)))
            printf(":(\n");
        else if(B>A && C>B && ((C-B)>=(B-A)))
            printf(":)\n");
        else if(A>B && B>C && ((B-C)<(A-B)))
            printf(":)\n");
        else if(A>B && B>C && ((B-C)>=(A-B)))
            printf(":(\n");
        else if(A==B)
        {
            if(C>B)
                printf(":)\n");
            else if(B>=C)
                printf(":(\n");
        }


}
