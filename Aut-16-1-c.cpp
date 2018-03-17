#include <iostream>

using namespace std;

class Test
{
    int a;
    int b;
public:
    Test() {a = b = 0;}
    Test(int x, int y) {a = x; b = y;}
    void show() {cout << "a = " << a << " b = " << b << endl;}
    friend Test operator-(Test &o1, Test &ob2);
};

Test operator-(Test &ob1, Test &ob2)
{
    Test temp;
    temp.a = ob1.a - ob2.a;
    temp.b = ob1.b - ob2.b;
    return temp;
}

int main()
{
    Test A(5, 10), B(10, 3), C;
    C = A - B;
    C.show();

    return 0;
}
