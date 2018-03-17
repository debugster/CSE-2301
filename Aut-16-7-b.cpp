#include <iostream>

using namespace std;

ostream &display(ostream &output)
{
    output.width(8);
    output.precision(5);
    output.fill('#');

    return output;
}

int main()
{
    cout << display << 123.345 << endl;
    return 0;
}
