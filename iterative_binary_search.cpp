// searching an element using binary search
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i, ele, n, mid, start, end, input; /* declaring an array. */
    vector<int> arr;

    // storing values in array
    cout << "Enter values of array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }

    for(i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the element you want to find: ";
    cin>> ele;

    start = 0;
    end = n-1;

    while(start < end)
    {
        mid = start + (end - start)/2;

        if(arr[mid] == ele)
        {
            cout<<ele<<" is at the index "<<mid;
            break;
        }

        else if(arr[mid]>ele)
        {
            end = mid - 1;
        }
        
        else if(arr[mid]<ele)
        {
            start = mid + 1;
        }
    }

    cout<<"Entered element is not in the array";

    return 0;
}