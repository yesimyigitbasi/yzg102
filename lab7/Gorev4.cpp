#include <iostream>
#include <string>
using namespace std;

class Ogrenci {
private:
    string ad, soyad;
    int   numara;
    float vize, finalNot, ortalama;

public:
    void bilgiGir(string a, string s, int n, float v, float f) {
        ad = a; soyad = s; numara = n;
        vize     = (v >= 0 && v <= 100) ? v : 0;
        finalNot = (f >= 0 && f <= 100) ? f : 0;
        ortalama = vize * 0.4 + finalNot * 0.6;
    }

    float getOrtalama() { return ortalama; }

    string getHarfNotu() {
        if (ortalama >= 90) return "AA";
        if (ortalama >= 80) return "BA";
        if (ortalama >= 70) return "BB";
        if (ortalama >= 60) return "CB";
        if (ortalama >= 50) return "CC";
        return "FF";
    }

    void yazBilgi() {
        cout << numara << " | " << ad << " " << soyad
             << " | Vize:" << vize << " Final:" << finalNot
             << " | Ort:" << ortalama << " | " << getHarfNotu() << endl;
    }
};

int main() {
    const int N = 4;
    Ogrenci sinif[N];
    sinif[0].bilgiGir("Ayse",   "Kaya",  1001, 75, 85);
    sinif[1].bilgiGir("Mehmet", "Oz",    1002, 60, 70);
    sinif[2].bilgiGir("Fatma",  "Demir", 1003, 90, 95);
    sinif[3].bilgiGir("Ali",    "Yilmaz",1004, 45, 55);

    float toplamOrt = 0;
    int enIyiIdx = 0;
    for (int i = 0; i < N; i++) {
        sinif[i].yazBilgi();
        toplamOrt += sinif[i].getOrtalama();
        if (sinif[i].getOrtalama() > sinif[enIyiIdx].getOrtalama())
            enIyiIdx = i;
    }
    cout << "Sinif ortalamasi: " << toplamOrt / N << endl;
    sinif[enIyiIdx].yazBilgi();
    return 0;
}
