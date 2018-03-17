#include <iostream>

using namespace std;


/// Abstract class
/// Instances of this class cannot be made
class parent
{
public:
    /// Pure virtual function
    virtual void show() = 0;
};

class daughter : public parent
{
public:
    void show() {cout << "I am daughter" << endl;}
};

class son : public parent
{
public:
    void show() {cout << "I am son" << endl;}
};

int main()
{
    daughter dObj;
    son sObj;
    parent *parentPtr = 0;

    parentPtr = &dObj;
    parentPtr->show();

    parentPtr = &sObj;
    parentPtr->show();

    return 0;
}

