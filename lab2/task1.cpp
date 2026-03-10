#include <iostream>

using namespace std;

int main() {
    // tek cift kontrolü
    int number;
    cout << "Bir sayı girin: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << number << " çift bir sayıdır." << endl;
    }
    else {
        cout << number << " tek bir sayıdır." << endl;
    }

}