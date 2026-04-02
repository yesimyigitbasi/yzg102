#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "Python";
    for (char letter : word) {
        cout << letter << " " << (int)letter << endl; // (int) casts char to ASCII value
    }
    return 0;
}
