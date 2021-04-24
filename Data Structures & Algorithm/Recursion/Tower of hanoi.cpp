#include<bits/stdc++.h>
using namespace std;
int c;
void hanoi(int num,char beg,char mid,char end)
{
    if(num==1)
    {
        printf("Move the disc 1 from peg %c to peg %c\n",beg,end);
        c++;
        return;
    }
    hanoi(num-1,beg,end,mid);
    c++;
    printf("Move the disc %d from peg %c to peg %c\n",num,beg,end);

    hanoi(num-1,mid,beg,end);
}

int main ()
{
    int n;
    scanf("%d",&n);
    hanoi(n,'A','B','C');
    cout<<c<<endl;
    return 0;
}
