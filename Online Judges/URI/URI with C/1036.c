#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float A,B,C,D,R1,R2;
    scanf("%f%f%f",&A,&B,&C);
        D = (B*B) - (4*A*C);
        if(D<0 || A==0)
        {
            printf("Impossivel calcular\n");
            exit(0);
        }
        D = sqrt(D);

        R1 = ((-1.0)*B + D)/(2*A);
        R2 = ((-1.0)*B - D)/(2*A);
        printf("R1 = %.5f\nR2 = %.5f\n",R1,R2);

}

