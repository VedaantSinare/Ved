#include <iostream>

using namespace std;

int main() 
{
    int a, sum = 0;

    cout << "Give any natural No. : "<<endl;
    cin >> a;

    for (int i = 1; i <= a; ++i) 
    {
        sum += i;
    }

    cout << "Sum of natural No. will be : " << sum;
    
    return 0;
}