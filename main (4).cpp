#include <iostream>

using namespace std;  

int main()  
{  

int a, rev=0, rem;    

cout<<"Give any number to reverse : ";    

cin>>a;

  while(a!=0)    
  {    
     rem=a%10;      
     rev=rev*10+rem;    
     a/=10;    
  }    

 cout<<"Reversed No. is : "<<rev<<endl;     

return 0;  
} 