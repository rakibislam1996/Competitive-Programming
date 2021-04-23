#include<stdio.h>
#include<math.h>
int main ()
{
    int N,i;
    char a[10],b[10];
    char Airstrike[10] = "ataque";
    char Rock[10] = "pedra";
    char Paper[10] = "papel";

    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        scanf("%s %s",a,b);

        if(strcmp(Airstrike,a)==0 && strcmp(Rock,b)==0)
            printf("Jogador 1 venceu\n");
        else if(strcmp(Airstrike,b)==0 && strcmp(Rock,a)==0)
            printf("Jogador 2 venceu\n");

        else if(strcmp(Paper,a)==0 && strcmp(Rock,b)==0)
            printf("Jogador 2 venceu\n");
        else if(strcmp(Rock,a)==0 && strcmp(Paper,b)==0)
            printf("Jogador 1 venceu\n");

        else if(strcmp(Paper,a)==0 && strcmp(Airstrike,b)==0)
            printf("Jogador 2 venceu\n");
        else if(strcmp(Airstrike,a)==0 && strcmp(Paper,b)==0)
            printf("Jogador 1 venceu\n");

        else if(strcmp(Paper,a)==0 && strcmp(Paper,b)==0)
            printf("Ambos venceram\n");

        else if(strcmp(Rock,a)==0 && strcmp(Rock,b)==0)
            printf("Sem ganhador\n");

        else if(strcmp(Airstrike,a)==0 && strcmp(Airstrike,b)==0)
            printf("Aniquilacao mutua\n");


    }
    return 0;
}
