#include <iostream>

using namespace std;

class parent
{
public:
    virtual void show() {cout << "I am parent" << endl;}
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
    parent pObj;
    daughter dObj;
    son sObj;
    parent *parentPtr;

    parentPtr = &pObj;
    parentPtr->show();

    parentPtr = &dObj;
    parentPtr->show();

    parentPtr = &sObj;
    parentPtr->show();

    return 0;
}
