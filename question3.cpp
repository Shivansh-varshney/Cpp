// calculate factors using default arguements.

#include <iostream>
#include <vector>
using namespace std;

vector<int> factors(int number, int upperlimit = -1)
{
    // vector<int> is to store all the factors
    vector<int> factors;

    if(number<=0)
    {
        cout<<"Please enter a valid number!!";
        return factors;
    }

    if(upperlimit = -1)
    {
        upperlimit = number;
    }

    for(int i = 1; i<=upperlimit; i++)
    {
        if(number % i == 0)
        {
            factors.push_back(i);
        }
    }

    return factors;
}

int main()
{
    int n;
    cout<<"Enter the number you want factors of: ";
    cin>>n;

    vector<int> result = factors(n);
    
    cout<<"All the factors of "<<n<<" are: ";
    for(int factor : result)
    {
        cout<< factor <<" ";
    }
}