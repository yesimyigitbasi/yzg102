#include <iostream>

using namespace std;

int main()
{
    char char1 = 'A';

    cout << char1 << endl;

    char char2 = '\t'; //tab variable
    char char3 = '\n'; //newline variable

    cout << char1 << char2 << char1 << endl;
    cout << char1 << char3 << char1 << endl;

    char1 = 'B';
    cout << char1;

    return 0;
}
