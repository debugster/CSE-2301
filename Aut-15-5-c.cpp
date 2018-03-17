#include <iostream>

using namespace std;

class test
{
private:
    int m;
public:
    void getdata()
    {
        cout << "Enter number";
        cin >> m;
    }
    void display()
    {
        cout << m;
    }
};

main()
{
    test T;
    ///T->getdata(); /// T is not a pointer, so arrow(->) operator cannot be used
    T.getdata();
    ///T->display(); /// T is not a pointer, so arrow(->) operator cannot be used
    T.display();
    ///Test *p; /// class name is test, not Test
    test *p;
    ///P = new test; /// p and P are not same
    p = new test;
    ///p.getdata(); /// p is not an object, so dot(.) operator cannot be used
    p->getdata();
    (*p).display();
}
