#include <iostream>

using namespace std;

int main() 
{
    int a, n, rem, answer = 0;
    
    cout << "Give any 3-digit No. : ";
    cin >> a;
    
    n = a;

    while (n != 0) 
    {
        rem = n % 10;
        
        answer += rem * rem * rem;
        
        n/= 10;
    }

    if (answer == a)
        cout << a << " is an Armstrong No.";
    else
        cout << a << " is not an Armstrong No.";

    return 0;
}