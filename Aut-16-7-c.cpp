#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("cse.txt");

    if (!fout) {
        cout << "File open error" << endl;
        return 1;
    }

    fout << "Department   :Computer Science and Engineering\n";
    fout << "Semester     :Autumn-2016\n";
    fout << "Course code  :CSE-2301\n";
    fout << "Course title :Object Oriented Programming I\n";

    fout.close();

    return 0;
}
