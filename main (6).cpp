#include <iostream>

using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks;
};

int main() 
{
    student s;

    cout << "** Fill Your Details **" << endl;

    cout << "Student's name : ";
    cin >> s.name;

    cout << "Student's Roll No. : ";
    cin >> s.roll;

    cout << "Marks obtained by Student : ";
    cin >> s.marks;

    cout <<endl<< "*** Information Of Student ***" << endl;

    cout << "Name : " << s.name << endl;

    cout << "Roll No. : " << s.roll << endl;

    cout << "Marks obtained : " << s.marks << endl;

    return 0;
}