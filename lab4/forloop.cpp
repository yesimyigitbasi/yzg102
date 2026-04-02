#include <iostream>
using namespace std;

int main() {
    // 0'dan 10'a kadar çift sayılar
    for (int i = 0; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << "\n";
    // 11'den 1'e kadar tek sayılar
    for (int i = 11; i >= 1; i -= 2) {
        cout << i << " ";
    }
    return 0;
}
