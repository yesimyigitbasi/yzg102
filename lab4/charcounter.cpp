#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string text = "The nested loops are loops";
    stringstream ss(text);
    string word;

    while (ss >> word) { // Extracts words based on spaces
        int count = 0;
        for (char c : word) {
            count++;
        }
        cout << word << "\t" << count << endl;
    }
    return 0;
}
