// searching an element using binary search
#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> arr, int ele, int end, int start = 0)
{
    if (start == end)
    {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == ele)
    {
        return mid;
    }

    else if (arr[mid] > ele)
    {
        end = mid - 1;
        return search(arr, ele, end, start);
    }

    else if (arr[mid] < ele)
    {
        start = mid + 1;        
        return search(arr, ele, end, start);
    }
}

int main()
{
    int i, ele, n, mid, start, end, input; /* declaring an array. */
    vector<int> arr;

    cout<<"Enter number of elements in the array: ";
    cin>>n;

    // storing values in array
    cout << "Enter values of array: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }

    cout << "Enter the element you want to find: ";
    cin >> ele;

    int index = search(arr, ele, n - 1);
    if(index == -1)
    {
        cout<<"Entered element is not in the array.";
    }
    else{
        cout<<"Element is at the index "<<index;
    }

    return 0;
}