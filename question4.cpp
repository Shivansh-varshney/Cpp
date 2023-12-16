#include <iostream>
#include <vector>
using namespace std;

vector<int> make_array(int n)
{
    int i, input; /* declaring an array. */
    vector<int> arr;

    // storing values in array
    cout << "Enter values of array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> input;
        arr.push_back(input);
    }

    return arr;
}

int tell_max(vector<int> array, int n)
{
    // find the maximum number in the array
    int max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

int tell_min(vector<int> array, int n)
{
    // find the minimum number in the array
    int min = array[0];
    for (int i = 1; i < n; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    return min;
}

int tell_average(vector<int> array, int n)
{
    int i, sum = 0, average;

    for (i = 0; i < n; i++)
    {
        sum = sum + array[i];
    }

    average = sum / n;

    return average;
}

int main()
{
    int n, ch;
    cout << "Enter nmber of elements you want to push into array: ";
    cin >> n;
    vector<int> array = make_array(n);

    // displaying values of an array
    cout << "Your array is: ";
    for (int element : array)
    {
        cout << element << ", ";
    }

    bool flag = true;
    while(flag == true)
    {
    cout << R"(
-----------------------------------------------------
What do you want to do now?
Enter 1 for maximum.
Enter 2 for minimum.
Enter 3 for average.
Enter 5 to end program.)";

    cin >> ch;
    switch (ch)
    {
        case 1:{
            int max = tell_max(array, n);
            cout<<R"(
-----------------------------------------
Mazimum in the array is )"<<max;
            continue;
}
        case 2:{
            int min = tell_min(array, n);
            cout<<R"(
-----------------------------------------
Minimum in the array is )"<<min;
            continue;
}
        case 3:{
            int average = tell_average(array, n);
            cout<<R"(
-----------------------------------------
Average of the array is )"<<average;
            continue;
}
        case 4:{
        flag = false;
        continue;
}    }
    }
    return 0;
}