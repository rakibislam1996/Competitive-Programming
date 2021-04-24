#include<bits/stdc++.h>
using namespace std;

void heapsort(int arr[],int p)
{
    int c,root;
    for(int i=1; i<=p; i++)
    {
        c=i;
        do
        {
            root=(c-1)/2;
            if(arr[root]<arr[c])
                swap(arr[root],arr[c]);
            c=root;
        }
        while(c!=0);
    }
}
int main()
{
    int n, i;
    cout<<"Enter the number of elements to sort : ";
    while(scanf("%d",&n)!=EOF)
    {
        int arr[n];
        int a[n];
        printf("\n\nElements are : ");
        for (i = 0; i < n; i++)
            scanf("%d",&arr[i]);
        for(int i=0; i<n; i++)
        {
            heapsort(arr,n-1-i);
            a[i]=arr[0];
            arr[0]=arr[n-1-i];
        }
        cout<<"\nSorted elements\n\n";
        for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
        cout<<"\n";
    }
    return 0;

}
