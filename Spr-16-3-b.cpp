#include <iostream>
#include <string>

using namespace std;

bool operator>(string s1, string s2)
{
    if (s1.size() > s2.size()) return true;
    return false;
}

int main()
{
    string t1 = "New", t2 = "Dhaka", t3 = "New Chittagong";
    string temp = t1 + t2;
    cout << "t1=" << t1 << "\nt2=" << t2 << "\nt3=" << t3 << endl;
    if (t3 > t1 + " " + t2) {
        cout << t3 << " is greater than " << t1 + " " + t2 << endl;
    }

    return 0;
}
