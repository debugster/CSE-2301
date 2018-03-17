#include <iostream>

using namespace std;

class outer
{
    int o;
public:
    class mid
    {
        int m;
    public:
        class inner
        {
            int i;
        public:
            void show() {cout << "from inner" << endl;}
        };
        void show() {cout << "from mid" << endl;}
    };
    void show() {cout << "from outer" << endl;}
};

int main()
{
    outer O;
    outer::mid M;
    outer::mid::inner I;

    O.show();
    M.show();
    I.show();

    return 0;
}
