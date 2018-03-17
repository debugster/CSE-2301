#include <iostream>

using namespace std;

class A
{
    int a;
public:
    A(int x) {a = x;}
    void showA() {cout << a << endl;}
};

class B : public A
{
    int b;
public:
    B(int x, int y) : A(x) {b = y;}
    void showB() {cout << b << endl;}
};

int main()
{
    B ob(5, 10);
    ob.showA();
    ob.showB();
    return 0;
}

