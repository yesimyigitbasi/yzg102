#include <iostream>

using namespace std;

int main() {
    // sıcaklık değeri kontrolu if else zinciri

    double sicaklik;

    cout << "Sıcaklık değerini girin (°C): ";
    cin >> sicaklik;

    if (sicaklik < 0) {
        cout << "Çok soğuk!" << endl;
    }
    else if (sicaklik >= 0 && sicaklik < 10) {
        cout << "Soğuk ." << endl;
    }
    else if (sicaklik >= 10 && sicaklik < 15) {
        cout << "Serin." << endl;
    }
    else if (sicaklik >= 15 && sicaklik < 20) {
        cout << "Hoş." << endl;
    }
    else if (sicaklik >= 20 && sicaklik < 25) {
        cout << "Güzel hava." << endl;
    }
    else if (sicaklik >= 25 && sicaklik < 35) {
        cout << "Sıcak." << endl;
    }
    else {
        cout << "Çok sıcak!" << endl;
    }

    return 0;
}