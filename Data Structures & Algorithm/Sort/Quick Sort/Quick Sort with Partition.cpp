#include<bits/stdc++.h>

using namespace std;

int partition (int array[], int first_index, int last_index)
{
    int pivot = array[last_index];
    int i = (first_index - 1);

    for (int j = first_index; j <= last_index- 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[last_index]);
    return (i + 1);
}

void quickSort(int array[], int first_index, int last_index)
{
    if (first_index < last_index)
    {
        int pi = partition(array, first_index, last_index);

        quickSort(array, first_index, pi - 1);
        quickSort(array, pi + 1, last_index);
    }
}

int main()
{
    int number_of_values;
    cin >> number_of_values;

    int array[number_of_values];

    for(int i=0;i<number_of_values;i++)
        cin >> array[i];

    quickSort(array,0,number_of_values-1);

    cout<<endl;
    for (int i=0; i < number_of_values; i++)
        cout<<array[i]<<"  ";

    return 0;
}
