#include<stdio.h>
char roman[] = {'I','V', 'X', 'L', 'C', 'D',  'M'};
int decimal[] ={ 1,  5,  10,  50,  100, 500, 1000};
///              0   1   2    3     4    5     6
void main ()
{
    int beg,end,N,d;
    scanf("%d",&N);

        while(N>0)
        {
            for(beg=6;beg>0;beg--)
            {
                if(N>=decimal[beg])
                    break;
            }
            for(end=0;end<7;end++)
            {
                if(N<=decimal[end])
                    break;
            }
            d = N;
            while(d!=0)
            {
                d /= 10;
                if(d<10)
                    break;
            }
            if(N==4)
            {
                printf("%c%c",roman[beg],roman[end]);
                N = 0;
            }
            else if(N>10 && d==4)
            {
                printf("%c%c",roman[beg],roman[end]);
                N -= (decimal[end] - decimal[beg]);
            }
            else if(N==9)
            {
                printf("%c%c",roman[beg-1],roman[end]);
                N = 0;
            }
            else if(N>10 && d==9)
            {
                printf("%c%c",roman[beg-1],roman[end]);
                N -= (decimal[end] - decimal[beg-1]);
            }
            else
            {
                printf("%c",roman[beg]);
                N -= decimal[beg];
            }
        }
        printf("\n");
}
