#include <iostream>

using namespace std;

int main()
{
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout.precision(5);
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::internal, ios::adjustfield);
    cout.width(12);
    //cout.fill('#');
    cout << 1235.40 << "\n";
    return 0;
}
