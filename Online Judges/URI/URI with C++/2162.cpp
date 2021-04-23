#include<iostream>
using namespace std;
int main ()
{
    int N;
    cin >> N;
    int H[N],x = 1;
    for(int i=0; i<N ; i++)
        cin >> H[i];
    int a,cplus = 0,cminus = 0;
    for(int i=0; i<N-1 ; i++)
    {
        a  = H[i] - H[i+1];
        if(a==0)
        {
            x = 0;
            cout << x <<endl;
            return 0;
        }
        else if(a<0)
        {
            cminus++;
            cplus = 0;
            if(cminus>1)
                {
                    cout<<0<<endl;
                    return 0;
                }
        }
        else if(a>0)
        {
            cplus++;
            cminus = 0;
            if(cplus>1)
                {
                    cout<<0<<endl;
                    return 0;
                }
        }
    }
    cout << x <<endl;
}
