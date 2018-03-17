#include <iostream>

using namespace std;

class Space
{
    int mCount;
public:
    Space() {mCount = 0;}
    Space operator++()
    {
        mCount++;
        ///return Space(mCount); /// No explicit constructor is declared which takes an integer as argument
        return Space();
    }
};

///void main() /// main must return int
int main()
{
    Space objSpace;
    ///objSpace++; /// ++ operator is overloaded for pre-increment, not for post-increment
    ++objSpace;
    return 0;
}
