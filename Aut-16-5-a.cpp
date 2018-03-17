#include <iostream>

using namespace std;

template<typename dataType>
dataType findMax(dataType x, dataType y)
{
    if (x > y) return x;
    return y;
}

int main()
{
    cout << "Between 5 and 10, " << findMax(5, 10) << " is maximum" << endl;
    cout << "Between 50.45 and 10.25, " << findMax(50.45, 10.25) << " is maximum" << endl;
    cout << "Between A and X, " << findMax('A', 'X') << " is maximum" << endl;
    return 0;
}
