#include <iostream>

using namespace std;

class FLOAT
{
    float f;
public:
    FLOAT() {f = 0;}
    FLOAT(float x) {f = x;}
    FLOAT operator+(FLOAT &obj);
    void show() {cout << f << endl;}
};

FLOAT FLOAT::operator+(FLOAT &obj)
{
    FLOAT temp;
    temp.f = this->f + obj.f;
    return temp;
}

int main()
{
    FLOAT f1(3.5), f2(2.8), f3;
    f3 = f1 + f2;
    f3.show();
    return 0;
}
