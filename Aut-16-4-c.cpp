#include <iostream>

using namespace std;

class OOP
{
    int p;
    int q;
public:
    OOP() {p = q = 0;}
    OOP(int i, int j) {p = i; q = j;}
    friend istream &operator>>(istream &input, OOP &obj);
    friend ostream &operator<<(ostream &output, const OOP &obj);
};

istream &operator>>(istream &input, OOP &obj)
{
    input >> obj.p >> obj.q;
    return input;
}

ostream &operator<<(ostream &output, const OOP &obj)
{
    output << "p = " << obj.p << " q = " << obj.q << endl;
    return output;
}

int main()
{
    OOP test;
    cin >> test;
    cout << test;
    return 0;
}
