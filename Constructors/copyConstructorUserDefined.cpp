#include<bits/stdc++.h>
using namespace std;

// Class definition for 'student'
class student {
    int rno;
    string name;
    double fee;

public:
    // Parameterized constructor
    student(int no, string n, double f)
    {
        rno = no;
        name = n;
        fee = f;
    }
    // Copy constructor
    // always pass by ref else inf loop
    student(student& t)
    {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
        cout << "Copy Constructor Called" << endl;
    }
    // Function to display student details
    void display()
    {
        cout << rno << "\t" << name << "\t" << fee << endl;
    }
};

int main()
{
    // Create student object with parameterized constructor
    student s(1001, "Manjeet", 10000);
    s.display();

    // Create another student object using the copy
    // constructor
    student manjeet(s);
    manjeet.display();

    return 0;
}