#include<bits/stdc++.h>
#define INT_BITS 32
using namespace std;
/*Function to left rotate n by d bits*/
int leftRotate(int n, unsigned int d)
{
   /* In n<<d, last d bits are 0. To put first 3 bits of n at
     last, do bitwise or of n<<d with n >>(INT_BITS - d) */
   return (n << d)|(n >> (INT_BITS - d));
}

/*Function to right rotate n by d bits*/
int rightRotate(int n, unsigned int d)
{
   /* In n>>d, first d bits are 0. To put last 3 bits of at
     first, do bitwise or of n>>d with n <<(INT_BITS - d) */
   return (n >> d)|(n << (INT_BITS - d));
}

/* Driver program to test above functions */
stack <int> bin;
void binary(int M)
{
    if(M>=1)
    {
        bin.push(M);
        binary(M>>1);
    }
    else
    {
        while(!(bin.empty()))
        {
            printf("%d ",bin.top()%2);
            bin.pop();
        }
    }
    cout<<endl;
}

int main()
{
  int n = 229;
  binary(n);
  int d = 3;
  printf("Left Rotation of %d by %d is ", n, d);
  printf("%d\n", leftRotate(n, d));
  binary(leftRotate(n, d));
  printf("\nRight Rotation of %d by %d is ", n, d);
  printf("%d\n", rightRotate(n, d));
  binary(rightRotate(n, d));
  return 0;
}
