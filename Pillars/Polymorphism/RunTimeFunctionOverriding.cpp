#include <bits/stdc++.h>

using namespace std;

class parent
{
public:
    void print()
    {
        cout << "Base Class" << endl;
    }
};

class child : public parent
{
public:
    void print()
    {
        cout << "Derived Class" << endl;
    }
};

int main()
{
    // derived
    child c;
    c.print();
    // base
    child c1;
    parent *ptr = &c1;
    ptr->print();

    // base
    c.parent::print();

    return 0;
}