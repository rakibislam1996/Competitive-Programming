#include<iostream>
using namespace std;
int main ()
{
    int N,M,value,i;
    int change[15];
    change[0] = 7;
    change[1] = 12;
    change[2] = 22;
    change[3] = 52;
    change[4] = 102;
    change[5] = 15;
    change[6] = 25;
    change[7] = 55;
    change[8] = 105;
    change[9] = 30;
    change[10] = 60;
    change[11] = 110;
    change[12] = 70;
    change[13] = 120;
    change[14] = 150;

    while(1)
    {
        cin >> N >> M;
        if(N!=0 && M!=0)
        {
            value = M-N;
            if(value<7)
            {
                cout<<"impossible\n";
                continue;
            }
            for(i=0;i<15;i++)
            {
                if(value==change[i])
                {
                    cout<<"possible\n";
                    break;
                }
            }
            if(i==15)
                cout<<"impossible\n";
        }
        else
            break;
    }

    return 0;
}
