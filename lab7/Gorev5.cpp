#include <iostream>
#include <string>
using namespace std;

class Arac {
private:
    string plaka, marka, model;
    int    yil;
    double gunlukFiyat;
    bool   kiralik;

public:
    void aracTanimla(string p, string ma, string mo, int y, double f) {
        plaka = p; marka = ma; model = mo;
        yil = y; gunlukFiyat = f;
        kiralik = false;
    }

    bool kirala(int gun, double& toplamUcret) {
        if (!kiralik) {
            kiralik = true;
            toplamUcret = gun * gunlukFiyat;
            cout << plaka << " -> " << gun << " gunlugune kiralandi."
                 << " Ucret: " << toplamUcret << " TL" << endl;
            return true;
        }
        cout << plaka << " -> Bu arac zaten kiralik!" << endl;
        return false;
    }

    void iade() {
        kiralik = false;
        cout << plaka << " iade edildi." << endl;
    }

    bool isKiralik()  { return kiralik; }

    void bilgiYazdir() {
        cout << plaka << " | " << marka << " " << model
             << " (" << yil << ") | "
             << gunlukFiyat << " TL/gun | "
             << (kiralik ? "KIRALIK" : "MUSAIT") << endl;
    }
};

int main() {
    Arac a1, a2, a3;
    a1.aracTanimla("34ABC01", "Toyota", "Corolla", 2022, 500.0);
    a2.aracTanimla("06DEF02", "Honda",  "Civic",   2021, 450.0);
    a3.aracTanimla("35GHI03", "Ford",   "Focus",   2023, 550.0);

    double ucret;
    a1.kirala(3, ucret);
    a2.kirala(7, ucret);
    a1.kirala(2, ucret);   // kiralik — hata mesaji

    a1.iade();
    a1.kirala(5, ucret);   // simdi musait

    cout << "\n--- ARAC DURUMU ---" << endl;
    a1.bilgiYazdir();
    a2.bilgiYazdir();
    a3.bilgiYazdir();
    return 0;
}
