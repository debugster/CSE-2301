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

    pObj.show();        /// Early or Static Binding
    parentPtr = &pObj;
    parentPtr->show();  /// Late of Dynamic Binding

    dObj.show();        /// Early or Static Binding
    parentPtr = &dObj;
    parentPtr->show();  /// Late of Dynamic Binding

    sObj.show();        /// Early or Static Binding
    parentPtr = &sObj;
    parentPtr->show();  /// Late of Dynamic Binding

    return 0;
}

