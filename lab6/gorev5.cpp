#include <iostream>
#include <string>
using namespace std;

struct Urun {
    string ad;
    int    stok;
    double fiyat;
};

int main() {
    int n;
    cout << "Kac urun? "; cin >> n;

    Urun* envanter = new Urun[n];

    for (int i = 0; i < n; i++) {
        cout << (i+1) << ". urun adi   : "; cin >> envanter[i].ad;
        cout << "   Stok mikt. : "; cin >> envanter[i].stok;
        cout << "   Fiyat (TL) : "; cin >> envanter[i].fiyat;
    }

    double toplamDeger = 0;
    int    enPahaliIdx = 0;
    for (int i = 0; i < n; i++) {
        toplamDeger += envanter[i].stok * envanter[i].fiyat;
        if (envanter[i].fiyat > envanter[enPahaliIdx].fiyat)
            enPahaliIdx = i;
    }

    cout << "Toplam stok degeri: " << toplamDeger << " TL" << endl;
    cout << "En pahali urun    : " << envanter[enPahaliIdx].ad
         << " (" << envanter[enPahaliIdx].fiyat << " TL)" << endl;

    delete[] envanter;
    envanter = nullptr;
    return 0;
}
