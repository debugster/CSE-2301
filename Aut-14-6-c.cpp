#include <iostream>

using namespace std;

template<typename dataType>
void SWAP(dataType &x, dataType &y)
{
    dataType temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 5, b = 10;
    char c = 'a', d = 'x';
    double e = 2.5, f = 4.9;

    cout << "Before swapping a = " << a << " b = " << b << endl;
    SWAP(a, b);
    cout << "After swapping a = " << a << " b = " << b << endl;

    cout << "Before swapping c = " << c << " d = " << d << endl;
    SWAP(c, d);
    cout << "After swapping c = " << c << " d = " << d << endl;

    cout << "Before swapping e = " << e << " f = " << f << endl;
    SWAP(e, f);
    cout << "After swapping e = " << e << " f = " << f << endl;

    return 0;
}
