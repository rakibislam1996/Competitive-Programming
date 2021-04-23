#include<bits/stdc++.h>
#define E "\n"
#define sc scanf
#define pf printf
#define pb push_back
typedef unsigned int ui;
typedef long long int lli;
typedef unsigned long long int ulli;
using namespace std;

int main ()
{
    int N;

    while(sc("%d",&N)!=EOF)
    {
        int arr[N+1];

        int arr2[1001]={0};

        int max = 0;
        for (int i=1; i<=N; i++)
        {
            sc("%d",&arr[i]);
            arr2[arr[i]] = i;
            if(arr[i]>max)
                max = arr[i];
        }
        int count=0;
        //int arr3[N];
        set<int>arr3;
        for (int i=1; i<=max; i++)
        {
            if(arr2[i])
            {
                //arr3[count] = arr2[i];
                arr3.insert(arr2[i]);
                count++;
            }
        }
        //sort(arr3,arr3+count);
        pf("%d\n",count);
//        for (int i=0; i<count; i++)
//        {
//            if(i==count-1)
//                pf("%d\n",arr[arr3[i]]);
//            else
//                pf("%d ",arr[arr3[i]]);
//        }
        set<int,greater<int>> :: iterator p;

        for(p=arr3.begin();p!=arr3.end();p++)
        {
            if(count==1)
                pf("%d\n",arr[*p]);
            else
                pf("%d ",arr[*p]);
            //cout<<*p<<"  ";
            count--;
        }
    }

    return 0;
}
