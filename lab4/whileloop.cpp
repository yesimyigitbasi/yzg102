#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int first, second, sum = 0, count = 0;
    cout << "İlk tam sayıyı girin: "; cin >> first;
    cout << "İkinci tam sayıyı girin: "; cin >> second;

    int current = min(first, second);
    int target = max(first, second);

    while (current <= target) {
        sum += current;
        count++;
        current++;
    }
    cout << "Toplam: " << sum << "\nOrtalama: " << (double)sum / count << endl;
    return 0;
}
