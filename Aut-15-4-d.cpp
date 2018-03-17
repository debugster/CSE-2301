#include <iostream>

using namespace std;

ostream &display(ostream &output)
{
    output.width(10);
    output.precision(2);
    output.setf(ios::fixed | ios::right);
    output.fill('*');

    return output;
}

int main()
{
    cout << display << 123.345 << endl;
    return 0;
}

