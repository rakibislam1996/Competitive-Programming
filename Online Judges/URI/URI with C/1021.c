#include<stdio.h>
void main ()
{
    int note,coin,money=0,note100=100,note50=50,note20=20,note10=10,note5=5,note2=2;
    int coin1=1,coin2=50,coin3=25,coin4=10,coin5=5,coin6=1;
    double N,c;
    while(scanf("%lf",&N)!=EOF)
    {
        note = (int)N;
        c = (N * 100);
        coin = (int)c;
        coin = coin % 100;
        printf("NOTAS:\n");

        money = note / note100;
        printf("%d nota(s) de R$ 100.00\n",money);
        note = note - (money*note100);

        money = note / note50;
        printf("%d nota(s) de R$ 50.00\n",money);
        note = note - (money*note50);

        money = note / note20;
        printf("%d nota(s) de R$ 20.00\n",money);
        note = note - (money*note20);

        money = note / note10;
        printf("%d nota(s) de R$ 10.00\n",money);
        note = note - (money*note10);

        money = note / note5;
        printf("%d nota(s) de R$ 5.00\n",money);
        note = note - (money*note5);

        money = note / note2;
        printf("%d nota(s) de R$ 2.00\n",money);
        note = note - (money*note2);

        printf("MOEDAS:\n");

        money =  note/ coin1;
        printf("%d moeda(s) de R$ 1.00\n",money);

        money = coin / coin2;
        printf("%d moeda(s) de R$ 0.50\n",money);
        coin = coin - (money*coin2);

        money = coin / coin3;
        printf("%d moeda(s) de R$ 0.25\n",money);
        coin = coin - (money*coin3);

        money = coin / coin4;
        printf("%d moeda(s) de R$ 0.10\n",money);
        coin = coin - (money*coin4);

        money = coin / coin5;
        printf("%d moeda(s) de R$ 0.05\n",money);
        coin = coin - (money*coin5);

        money = coin / coin6;
        printf("%d moeda(s) de R$ 0.01\n",money);

    }
}
