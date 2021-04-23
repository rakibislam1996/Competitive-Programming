#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int i,j;
    double A,B,C,X[3],t;
    while(scanf("%lf %lf %lf",&A,&B,&C)!=EOF)
    {
                X[0] = A;
                X[1] = B;
                X[2] = C;
                for(i=0;i<3-1;i++)
                    for(j=0;j<3-i-1;j++)
                        if(X[j]<X[j+1])
                        {
                            t = X[j];
                            X[j] = X[j+1];
                            X[j+1] = t;
                        }
                A = X[0];
                B = X[1];
                C = X[2];
                if(A >= (B + C))
                    {
                        printf("NAO FORMA TRIANGULO\n");
                        exit(0);
                    }
                if(A*A == (B*B + C*C))
                    printf("TRIANGULO RETANGULO\n");
                if(A*A > (B*B + C*C))
                    printf("TRIANGULO OBTUSANGULO\n");
                if(A*A < (B*B + C*C))
                    printf("TRIANGULO ACUTANGULO\n");
                if(A == B && B == C && A==C)
                    printf("TRIANGULO EQUILATERO\n");
                if((A == B || B == C || A==C) && (A != B || B != C || A!=C))
                    printf("TRIANGULO ISOSCELES\n");
    }
}

