#include<stdio.h>
void main()
{
    float A,B,C,D,ave,fave,media,score;
    while(scanf("%f%f%f%f",&A,&B,&C,&D)!=EOF)
    {
        media = (A*2.0 + B*3.0 + C*4.0 + D*1.0)/(1.0+2.0+3.0+4.0);
        printf("Media: %.1f\n",media);
        if(media>=5.0 && media<=6.9)
        {
            printf("Aluno em exame.\n");
            scanf("%f",&score);
            printf("Nota do exame: %.1f\n",score);
            ave = (media + score)/2.0;
            if(ave >=5.0)
                printf("Aluno aprovado.\n");
            else if(ave<=4.9)
                printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",ave);
        }

        else if(media>=7.0)
            printf("Aluno aprovado.\n");
        else if(media<5.0)
            printf("Aluno reprovado.\n");
    }

}
