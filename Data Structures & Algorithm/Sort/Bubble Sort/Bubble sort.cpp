#include<iostream>
using namespace std;

void bubble_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i;j++)
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
}

int main()
{
    cout<<"Enter number of values: ";
    int number_of_values;
    cin >> number_of_values;

    int array[number_of_values];
    cout<<"Enter "<<number_of_values<<" values\n";
    for(int i=0;i<number_of_values;i++)
        cin >> array[i];

    bubble_sort(array,number_of_values);

    cout<<"The sorted array is"<<endl;
    for(int i=0;i<number_of_values;i++)
        cout<<array[i]<<"  ";

    return 0;
}
