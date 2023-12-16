// fibonacci series upto n numbers
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    int f[n] = {0, 1};

    // adding the terms in the array
    for(i = 2; i < n; i++)
    {
        f[i] = f[i-1] + f[i-2];
    }

    // print the series
    for(i = 0; i < n; i++)
    {
        cout<<f[i]<<" ";
    }

    return 0
}