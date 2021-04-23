#include<stdio.h>
#include<string.h>
void main ()
{
    char a[20],b[20],c[20];
    gets(a);
    gets(b);
    gets(c);

    char a1[20] = "vertebrado";
    char a2[20] = "invertebrado";

    char b1[20] = "ave";
    char b2[20] = "mamifero";
    char b3[20] = "inseto";
    char b4[20] = "anelideo";

    char c1[20] = "carnivoro";
    char c2[20] = "onivoro";
    char c3[20] = "onivoro";
    char c4[20] = "herbivoro";
    char c5[20] = "hematofago";
    char c6[20] = "herbivoro";
    char c7[20] = "hematofago";
    char c8[20] = "onivoro";

    char d1[20] = "aguia";
    char d2[20] = "pomba";
    char d3[20] = "homem";
    char d4[20] = "vaca";
    char d5[20] = "pulga";
    char d6[20] = "lagarta";
    char d7[20] = "sanguessuga";
    char d8[20] = "minhoca";

    if(strcmp(a,a1)==0)
    {
        if(strcmp(b,b1)==0)
        {
            if(strcmp(c,c1)==0)
                puts(d1);
            else if(strcmp(c,c2)==0)
                puts(d2);
        }
        else if(strcmp(b,b2)==0)
        {
            if(strcmp(c,c3)==0)
                puts(d3);
            else if(strcmp(c,c4)==0)
                puts(d4);
        }
    }
    else if(strcmp(a,a2)==0)
    {
        if(strcmp(b,b3)==0)
        {
            if(strcmp(c,c5)==0)
                puts(d5);
            else if(strcmp(c,c6)==0)
                puts(d6);
        }
        else if(strcmp(b,b4)==0)
        {
            if(strcmp(c,c7)==0)
                puts(d7);
            else if(strcmp(c,c8)==0)
                puts(d8);
        }
    }

}










