/// Overloading -- operator using friend function
#include <iostream>

using namespace std;

class data
{
    int a;
    int b;
public:
    data() {a = b = 0;}
    data(int x, int y) {a = x; b = y;}
    friend data &operator--(data &obj) {--obj.a; --obj.b; return obj;} /// pre-decrement
    friend data operator--(data &obj, int) {obj.a--; obj.b--; return obj;} /// post-decrement
    void show() {cout << "a = " << a << " b = " << b << endl;}
};

int main()
{
    data d1(5, 6), d2(-1, 9);
    --d1;
    d2--;
    d1.show();
    d2.show();
    return 0;
}

