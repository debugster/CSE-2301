#include <iostream>

using namespace std;

int main()
{
    cout << "here we begin: ";
    try
    {
        cout << "try block starts here";
        throw 22.1;
        cout << "End of try block";
    }
    catch (int i)
    {
        cout << "Caught a number, the number is: ";
        cout << i << "\n";
    }
    cout << "end";
    return 0;
}
