#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    char ch;

    fin.open("cse.txt");

    if (!fin) {
        cout << "File open error" << endl;
        return 1;
    }

    while (true) {
        fin.get(ch);
        if (fin.eof()) {
            break;
        }
        cout << ch;
    }

    return 0;
}

