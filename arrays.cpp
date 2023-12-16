#include <iostream>
using namespace std;

int main()
{
    // how to declare an array and store values in it.
    int i;
    int a[10]; /* declaring an array. */
    
    // storing values in array
    cout<<"Enter values of array:"<<endl;
    for(i = 0; i < 10; i++)
    {
        cin>>a[i];
    }

    // displaying values of an array
    cout<<"Elements of the array are: ";
    for(i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }

    // find the maximum number in the array
    int max = a[0];
    for(i = 1; i < 10; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    cout<<"Maximum number is "<<max;

    // find the minimum number in the array
    int min = a[0];
    for(i = 1; i < 10; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    cout<<"Minimum number is "<<min;

    return 0;
}