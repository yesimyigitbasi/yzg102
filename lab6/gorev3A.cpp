#include <iostream>
using namespace std;

// Versiyon 1: Değer ile (by value)
void ikiyeKatlaV(int x) {
    x = x * 2;
}

//Cevap:
void ikiyeKatlaR(int& x) {
    x = x * 2;    // boşluk 1: x,  boşluk 2: x
}

//Cevap:
void ikiyeKatlaP(int* x) {
    *x = *x * 2;  // boşluk 3: *x,  boşluk 4: *x
}


int main() {
    int sayi = 5;

    ikiyeKatlaV(sayi);
    cout << "Ikiye katla (deger): " << sayi << endl; // 5

    ikiyeKatlaR(sayi);
    cout << "Ikiye katla (referans): " << sayi << endl; // 10

    ikiyeKatlaP(&sayi);
    cout << "Ikiye katla (pointer): " << sayi << endl; // 20

}
