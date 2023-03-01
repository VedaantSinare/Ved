#include <iostream>

using namespace std;

int main() 
{
     int a, f = 1;

    cout << "Give any No. : "<<endl;
    cin >> a;

    for (int i = 1; i <= a; ++i) 
    {
        f *= i;
    }

    cout << "Factorial of given No. will be : " << f;
    
    return 0;

}