#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Ogrenci {
    int    numara;
    string ad;
    string soyad;
    float  vize;
    float  final_;
    float  ortalama;
};

int main() {
    const int N = 3;
    Ogrenci sinif[N];

    // Öğrenci bilgilerini oku ve ortalama hesapla
    cout << "--- OGRENCI BILGI GIRISI ---" << endl;
    for (int i = 0; i < N; i++) {
        cout << "\n" << (i + 1) << ". ogrenci numarasi: ";
        cin  >> sinif[i].numara;
        cout << "   Adi              : ";
        cin  >> sinif[i].ad;
        cout << "   Soyadi           : ";
        cin  >> sinif[i].soyad;
        cout << "   Vize notu        : ";
        cin  >> sinif[i].vize;
        cout << "   Final notu       : ";
        cin  >> sinif[i].final_;

        sinif[i].ortalama = sinif[i].vize * 0.40 + sinif[i].final_ * 0.60;

        //cout << fixed << setprecision(2);
        cout << "   (ortalama: " << sinif[i].ortalama << ")" << endl;
    }

    // Tabloyu ekrana yaz
    cout << "\n--- SONUCLAR ---" << endl;
    cout << left
         << setw(7)  << "No"
         << setw(15) << "Ad"
         << setw(15) << "Soyad"
         << setw(7)  << "Vize"
         << setw(7)  << "Final"
         << setw(7)  << "Ort"
         << endl;

    for (int i = 0; i < N; i++) {
        //cout << fixed << setprecision(1);
        cout << left
             << setw(7)  << sinif[i].numara
             << setw(15) << sinif[i].ad
             << setw(15) << sinif[i].soyad
             << setw(7)  << sinif[i].vize
             << setw(7)  << sinif[i].final_
             << setw(7)  << sinif[i].ortalama
             << endl;
    }
    // En yüksek ortalamayı bul
    int enIyiIdx = 0;
    for (int i = 1; i < N; i++)
        if (sinif[i].ortalama > sinif[enIyiIdx].ortalama)
            enIyiIdx = i;

    cout << fixed << setprecision(2);
    cout << "\nEn yuksek ortalama: "
         << sinif[enIyiIdx].ad << " "
         << sinif[enIyiIdx].soyad
         << " -> " << sinif[enIyiIdx].ortalama
         << endl;

    return 0;
}
