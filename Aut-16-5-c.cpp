#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int>cse_p;

    cse_p.push(-10);
    cse_p.push(1);
    cse_p.push(15);
    cse_p.push(-50);
    cse_p.push(10);

    cout << cse_p.top() << endl;
    cse_p.pop();
    cout << "cse_p.top() is now: " << cse_p.top() << endl;

    return 0;
}
