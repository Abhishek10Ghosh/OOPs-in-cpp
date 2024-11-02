#include<bits/stdc++.h>
using namespace std;

// Class definition
class student {
    int rno;
    char name[50];
    double fee;

public:
    /*
    Here we will define a constructor
    inside the same class for which
    we are creating it.
    */
//    student()  => outside class declaration
    student()
    {
        // Constructor within the class

        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";
        cin >> fee;
    }

    // Function to display the data
    // defined via constructor
    void display()
    {
        cout << endl << rno << "\t" << name << "\t" << fee;
    }
};

// student::student()
// {
//     // outside definition of constructor

//     cout << "Enter the RollNo:";
//     cin >> rno;
//     cout << "Enter the Name:";
//     cin >> name;
//     cout << "Enter the Fee:";
//     cin >> fee;
// }

int main()
{

    student s;
    /*
    constructor gets called automatically
    as soon as the object of the class is declared
    */

    s.display();
    return 0;
}