#include <iostream>

class A
{
    int i;
};

class AB : virtual A
{
    int j;
};

///class AC : A, ABAC /// class ABAC is not declared earlier
class AC : A
{
    int k;
};

class ABAC : AB, AC
{
    int l;
};

///void main() /// main must return an integer
int main()
{
    ABAC abac;
    ///Cout << "sizeof ABAC:" << sizeof(abac); /// Cout is not a valid ostream object
    std::cout << "sizeof ABAC:" << sizeof(abac);
    return 0;
}


