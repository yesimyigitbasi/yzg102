#include <iostream>
#include <string>
using namespace std;

class BankaHesabi {
private:
    string sahibi;
    string hesapNo;
    float  bakiye;
    int    islemSayisi;

public:
    void hesapAc(string ad, string no, float baslangic) {
        sahibi       = ad;
        hesapNo      = no;
        bakiye       = (baslangic >= 0) ? baslangic : 0;
        islemSayisi  = 0;
    }

    void yatir(float miktar) {
        if (miktar > 0) {
            bakiye += miktar;
            islemSayisi++;
            cout << miktar << " TL yatirildi." << endl;
        } else {
            cout << "Gecersiz yatirma miktari!" << endl;
        }
    }

    bool cek(float miktar) {
        if (miktar > 0 && miktar <= bakiye) {
            bakiye -= miktar;
            islemSayisi++;
            cout << miktar << " TL cekildi." << endl;
            return true;
        }
        cout << "Gecersiz cekim: Yetersiz bakiye!" << endl;
        return false;
    }

    float getBakiye()       { return bakiye; }
    int   getIslemSayisi()  { return islemSayisi; }

    void ekstreYazdir() {
        cout << "Hesap No  : " << hesapNo      << endl;
        cout << "Sahip     : " << sahibi       << endl;
        cout << "Bakiye    : " << bakiye        << " TL" << endl;
        cout << "Islem Say.: " << islemSayisi  << endl;
    }
};

int main() {
    BankaHesabi h1;
    h1.hesapAc("Ayse Kaya", "TR001", 1000.0);
    h1.yatir(500.0);
    h1.cek(200.0);
    h1.cek(2000.0);
    h1.ekstreYazdir();
    return 0;
}
