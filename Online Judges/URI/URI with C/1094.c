#include<stdio.h>
void main ()
{
    int N,C=0,R=0,S=0,a,total=0,i;
    char b;
    float CP,RP,SP;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        {
            scanf("%d %c",&a,&b);
            total += a;
            switch (b)
            {
                case 'C':
                    C = C + a;
                    break;
                case 'R':
                    R = R + a;
                    break;
                case 'S':
                    S = S + a;
                    break;
            }
        }
    CP = ((float)C / (float)total) * 100.00;
    RP = ((float)R / (float)total) * 100.00;
    SP = ((float)S / (float)total) * 100.00;

    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",total,C,R,S);
    printf("Percentual de coelhos: %.2f %\nPercentual de ratos: %.2f %\nPercentual de sapos: %.2f %\n",CP,RP,SP);
}


