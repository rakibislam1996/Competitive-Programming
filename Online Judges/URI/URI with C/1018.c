#include<stdio.h>
void main ()
{
    int N,money=0,note100=100,note50=50,note20=20,note10=10,note5=5,note2=2,note1=1;
    while(scanf("%d",&N)!=EOF)
    {
        printf("%d\n",N);

        money = N / note100;
        printf("%d nota(s) de R$ 100,00\n",money);
        N = N - (money*note100);

        money = N / note50;
        printf("%d nota(s) de R$ 50,00\n",money);
        N = N - (money*note50);

        money = N / note20;
        printf("%d nota(s) de R$ 20,00\n",money);
        N = N - (money*note20);

        money = N / note10;
        printf("%d nota(s) de R$ 10,00\n",money);
        N = N - (money*note10);

        money = N / note5;
        printf("%d nota(s) de R$ 5,00\n",money);
        N = N - (money*note5);

        money = N / note2;
        printf("%d nota(s) de R$ 2,00\n",money);
        N = N - (money*note2);

        money = N / note1;
        printf("%d nota(s) de R$ 1,00\n",money);
    }
}
