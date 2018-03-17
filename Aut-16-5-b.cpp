#include <iostream>

using namespace std;

double divide(int numerator, int denominator)
{
    if (denominator == 0) {
        throw -1;
    }
    return (double) numerator / denominator;
}

int main()
{
    int x, y;
    double q;

    cin >> x >> y;
    try
    {
        q = divide(x, y);
        cout << q << endl;
    }
    catch (int)
    {
        cout << "Cannot divide by 0" << endl;
    }

    return 0;
}
