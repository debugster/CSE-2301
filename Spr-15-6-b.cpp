#include <iostream>

using namespace std;

double divide(int numerator, int denominator)
{
    try
    {
        if (denominator == 0) {
            throw -1;
        }
        return (double) numerator / denominator;
    }
    catch (int)
    {
        cout << "Catching exception inside divide()" << endl;
        throw;
    }
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
        cout << "Catching exception inside main()" << endl;
    }

    return 0;
}
