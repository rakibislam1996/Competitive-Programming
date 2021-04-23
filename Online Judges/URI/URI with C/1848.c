#include <stdio.h>
void main ()
{
    int i,scream = 0,l=0;
    char caw[8] = "caw caw";
    char b1[4] = "*--";
    char b2[4] = "-*-";
    char b3[4] = "--*";
    char b4[4] = "---";
    char b5[4] = "-**";
    char b6[4] = "**-";
    char b7[4] = "*-*";
    char b8[4] = "***";
    char c[8];

    while(scream!=3)
    {
        gets(c);
        if(strcmp(c,caw)==0)
        {
                scream++;
                printf("%d\n",l);
                l = 0;
                continue;
        }
        else if(strcmp(c,b1)==0)
        {
                l = l + 4;
                continue;
        }
        else if(strcmp(c,b2)==0)
        {
                l = l + 2;
                continue;
        }
        else if(strcmp(c,b3)==0)
        {
                l = l + 1;
                continue;
        }
        else if(strcmp(c,b4)==0)
        {
                l = l + 0;
                continue;
        }
        else if(strcmp(c,b5)==0)
        {
                l = l + 3;
                continue;
        }
        else if(strcmp(c,b6)==0)
        {
                l = l + 6;
                continue;
        }
        else if(strcmp(c,b7)==0)
        {
                l = l + 5;
                continue;
        }
        else if(strcmp(c,b8)==0)
        {
                l = l + 7;
                continue;
        }

    }


}


