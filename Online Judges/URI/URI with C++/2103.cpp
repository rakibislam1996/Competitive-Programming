#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double xf,yf,xi,yi,v,r1,r2;
    while(scanf("%lf%lf%lf%lf%lf%lf%lf",&xf,&yf,&xi,&yi,&v,&r1,&r2)!=EOF)
    {
        double distance = sqrt((xf-xi)*(xf-xi)+(yf-yi)*(yf-yi)) + v*1.5;
        //cout<<distance<<endl;
        //cout<<r1+r2<<endl;
        if(distance<=(r1+r2))
            cout<<"Y\n";
        else
            cout<<"N\n";
    }
    return 0;
}
