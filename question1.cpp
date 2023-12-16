// find the sum of the following series: -
// s = 1 - (2^n) + (3^n) - (4^n) ..... upto n

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,n;
    float s;

    cout<<"I can sum the following series"<<endl<<"s = 1 - (2^n) + (3^n) - (4^n) ..... upto n terms"<<endl;
    cout<<"Enter the number of terms you want to calculate upto:";
    cin>>n;

    for(i = 1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            s = s - pow(i, n);
        }
        else
        {
            s = s + pow(i, n);
        }
    }

    cout<<"Your answer is "<<s;

    return 0;
}