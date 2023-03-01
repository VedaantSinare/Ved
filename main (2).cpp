#include <iostream>

using namespace std;

int main() 
{
    int a;
    cout<<"Enter any integer :";
    cin>>a;
    
    if(a%2 == 0)
    {
        cout<<"Given No. is Even "<<a;
    }
    else
    {
        cout<<"Given No. is Odd "<<a;
    }
}