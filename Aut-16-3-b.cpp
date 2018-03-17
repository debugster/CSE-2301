#include <iostream>

using namespace std;

class Nest
{
public:
    class Display
    {
    private:
        int s;
    public:
        void sum(int a, int b) {s = a + b;}
        void show() {cout << "\nSum of a and b is:: " << s;}
    };
};

int main()
{
    Nest::Display obj;
    obj.sum(5, 3);
    obj.show();
    return 0;
}
