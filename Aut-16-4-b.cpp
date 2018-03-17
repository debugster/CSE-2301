#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string s = "hello";
    double d = 123.234567;

    cout << setw(10) << s << endl;
    cout << setw(10) << setfill('%') << s << endl;
    cout << setw(10) << setfill('%') << left << s << endl;
    cout << fixed << d << endl;
    cout << setw(10) << setfill('%') << setprecision(3) << d << endl;

    return 0;
}

