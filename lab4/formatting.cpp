#include <iostream>
using namespace std;

int main() {
    int counter = 0;
    cout << "Number\tSquare\tCube" << endl;
    while (counter <= 10) {
        cout << counter << "\t" << counter * counter << "\t" << counter * counter * counter << endl;
        counter++;
    }
    return 0;
}
