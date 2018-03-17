#include <iostream>

using namespace std;

class base
{
public:
    int a;
};

class derived1 : virtual public base
{
public:
    int b;
};

class derived2 : virtual public base
{
public:
    int c;
};

class derived3 : public derived1, public derived2
{
public:
    void sum() {cout << a + b + c << endl;}
};

int main()
{
    derived3 ob;
    ob.a = 1;
    ob.b = 2;
    ob.c = 3;
    ob.sum();
    return 0;
}
