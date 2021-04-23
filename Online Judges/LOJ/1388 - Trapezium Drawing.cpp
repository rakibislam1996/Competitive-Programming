#include <cstdio>
#include <cmath>

using namespace std;

struct point{
    double x,y;

    point(int _x, int _y) : x(_x), y(_y){}
    point(double _x, double _y) : x(_x), y(_y){}

    point operator + (point P){
        return point(x + P.x,y + P.y);
    }

    point operator * (double k){
        return point(k * x,k * y);
    }

    point operator / (double k){
        return point(x / k,y / k);
    }

    point perp(){
        return point(-y,x);
    }

    double abs(){
        return sqrt(x * x + y * y);
    }
};

int main()
{

    int T;
    double x1,y1,x2,y2,b,c,d;

    scanf("%d",&T);

    for(int tc = 1;tc <= T;++tc){
        scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&b,&c,&d);

        point A = point(x1,y1);
        point AB = point(x2 - x1,y2 - y1);

        double a = AB.abs();

        double k1 = (a - c + (d * d - b * b) / (a - c)) / 2;
        double h = sqrt(d * d - k1 * k1);

        AB = AB / a;

        point Dproy = A + AB * k1;
        point Cproy = A + AB * (k1 + c);

        AB = AB.perp();

        point D = Dproy + AB * h;
        point C = Cproy + AB * h;

        printf("Case %d:\n%.8f %.8f %.8f %.8f\n",tc,C.x,C.y,D.x,D.y);
    }

    return 0;
}
