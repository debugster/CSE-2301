#include <iostream>

using namespace std;

class base
{
    int a;
public:
    void setA(int x) {a = x;}
    int getA() {return a;}
};

class derived : public base
{
    int b;
public:
    void setB(int y) {b = y;}
    int getB() {return b;}
};

int main()
{
    base *basePtr;
    base baseObj;
    derived derObj;

    basePtr = &baseObj;
    basePtr->setA(5);
    cout << basePtr->getA() << endl;

    basePtr = &derObj;
    basePtr->setA(10);
    derObj.setB(20);
    cout << basePtr->getA() << " " << derObj.getB() << endl;

    return 0;
}
