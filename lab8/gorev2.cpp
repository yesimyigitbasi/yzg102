#include <iostream>
#include <cmath>
using namespace std;

class Urun {
    const int barkod;
    string isim;
    double fiyat;
public:
    Urun(int b, string i, double f) {
        barkod = b;   // HATA!
        isim   = i;
        fiyat  = f;
    }
    void yazdir() const {
        cout << barkod << " | " << isim << " | " << fiyat << " TL" << endl;
    }
};
