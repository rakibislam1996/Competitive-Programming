#include<bits/stdc++.h>
using namespace std;

double div(double s)
{
    s = 1.0/(s+6);
    //cout<<fixed<<setprecision(10)<<"s = "<<s<<endl;
    return s;
}

int main ()
{
    int N;
    cin>>N;
    if(N==0)
    {
        cout<<fixed<<setprecision(10)<<3.0<<endl;
    }
    else
    {
        double x=1.0/6,sum=0;
        for(int i=1; i<=N; i++)
        {
            if(i==1)
                sum = x;
            else if(i==2)
                sum = div(x);
            else
                sum = div(sum);
            //cout<<fixed<<setprecision(10)<<"sum = "<<sum<<endl;
        }
        cout<<fixed<<setprecision(10)<<3+sum<<endl;
    }

    return 0;
}
