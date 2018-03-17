#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int dec;
    vector<int>bin;

    cout << "Enter a decimal number: ";
    cin >> dec;

    do {
        bin.push_back(dec % 2);
        dec /= 2;
    } while (dec != 0);

    for (int i = bin.size() - 1; i >= 0; i--) {
        cout << bin[i];
    }
    cout << endl;
    return 0;
}
