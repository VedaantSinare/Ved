#include <iostream>

using namespace std;

int main() {
    
    double a, b, c;

    cout << "Give any three numbers : "<<endl;
    cin >> a >> b >> b;

    if(a > b && a > c)
        cout << "The largest number is : " << a;

    else if(b > a && b > c)
        cout << "The largest number is : " << b;

    else 
        cout << "The largest number is : " << c;
  
    return 0;
}