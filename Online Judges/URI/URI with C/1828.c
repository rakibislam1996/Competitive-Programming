#include<stdio.h>
#include<math.h>
int main ()
{
    int T,i;
    char a[10],b[10];
    char scissors[10] = "tesoura";
    char rock[10] = "pedra";
    char paper[10] = "papel";
    char lizard[10] = "lagarto";
    char Spock[10] = "Spock";
    scanf("%d",&T);

    for(i=1;i<=T;i++)
    {
        scanf("%s %s",a,b);
        if(strcmp(a,b)==0)
            printf("Caso #%d: De novo!\n",i);
        else if(strcmp(scissors,a)==0 && strcmp(paper,b)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if(strcmp(scissors,b)==0 && strcmp(paper,a)==0)
            printf("Caso #%d: Raj trapaceou!\n",i);

        else if(strcmp(paper,a)==0 && strcmp(rock,b)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if(strcmp(rock,a)==0 && strcmp(paper,b)==0)
            printf("Caso #%d: Raj trapaceou!\n",i);

        else if(strcmp(rock,a)==0 && strcmp(lizard,b)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if(strcmp(lizard,a)==0 && strcmp(rock,b)==0)
            printf("Caso #%d: Raj trapaceou!\n",i);

        else if(strcmp(Spock,a)==0 && strcmp(scissors,b)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if(strcmp(scissors,a)==0 && strcmp(Spock,b)==0)
            printf("Caso #%d: Raj trapaceou!\n",i);

        else if(strcmp(scissors,a)==0 && strcmp(lizard,b)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if(strcmp(lizard,a)==0 && strcmp(scissors,b)==0)
            printf("Caso #%d: Raj trapaceou!\n",i);

        else if(strcmp(lizard,a)==0 && strcmp(paper,b)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if(strcmp(paper,a)==0 && strcmp(lizard,b)==0)
            printf("Caso #%d: Raj trapaceou!\n",i);

        else if(strcmp(paper,a)==0 && strcmp(Spock,b)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if(strcmp(Spock,a)==0 && strcmp(paper,b)==0)
            printf("Caso #%d: Raj trapaceou!\n",i);

        else if(strcmp(Spock,a)==0 && strcmp(rock,b)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if(strcmp(rock,a)==0 && strcmp(Spock,b)==0)
            printf("Caso #%d: Raj trapaceou!\n",i);

        else if(strcmp(rock,a)==0 && strcmp(scissors,b)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if(strcmp(scissors,a)==0 && strcmp(rock,b)==0)
            printf("Caso #%d: Raj trapaceou!\n",i);

        else if(strcmp(lizard,a)==0 && strcmp(Spock,b)==0)
            printf("Caso #%d: Bazinga!\n",i);
        else if(strcmp(lizard,b)==0 && strcmp(Spock,a)==0)
            printf("Caso #%d: Raj trapaceou!\n",i);

    }
    return 0;
}
