#include <iostream>

using namespace std;

class AA
{
public:
    AA() {cout << "Constructing AA";}
    ~AA() {cout << "Destructing AA\n";}
};

class BB
{
    int b;
public:
    BB() {cout << "Constructing BB";}
    ~BB() {cout << "Destructing BB\n";}
};

class CC : public AA, public BB
{
public:
    CC() {cout << "Constructing D";}
    ~CC() {cout << "Destructing D\n";}
};

int main()
{
    CC ob;
    return 0;
}
