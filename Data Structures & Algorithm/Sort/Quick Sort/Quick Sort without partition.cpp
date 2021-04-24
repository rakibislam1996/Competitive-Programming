#include<iostream>

using namespace std;

quickSort(int array[],int first_index,int last_index) /// first_index is used as pivot
{
    if(first_index < last_index)
    {
        int i = first_index + 1;                      /// 'i' is for comparing from the element after the pivot
        int j = last_index;                           /// 'j' is for comparing from the last element

        while(array[i] < array[first_index])          /// Iterates until the element greater or equal than the pivot is found
            i++;
        while(array[j] > array[first_index])          /// Iterates until the element smaller or equal than the pivot is found
            j--;

        while(i<j)
        {
            swap(array[i] , array[j]);                /// Interchanging elements of 'i'th 'j'th position

            while(array[i] < array[first_index])      /// Iterates until the element greater or equal than the pivot is found
                i++;
            while(array[j] > array[first_index])      /// Iterates until the element smaller or equal than the pivot is found
                j--;
        }

        swap(array[first_index],array[j]);            /// Interchanging the pivot with the element in 'j'th position

        quickSort(array,first_index,j-1);             /// Calling recursively with the index before the pivot
        quickSort(array,j+1,last_index);              /// Calling recursively with the index after the pivot

    }
}


int main ()
{
    int number_of_values;
    cin >> number_of_values;

    int array[number_of_values];

    for(int i=0;i<number_of_values;i++)
        cin >> array[i];

    quickSort(array,0,number_of_values-1);

    cout<<endl;
    for(int i=0;i<number_of_values;i++)
        cout << array[i]<<" ";

    return 0;
}
/*
13
27 99 0 8 13 64 86 16 7 10 88 25 90
*/
