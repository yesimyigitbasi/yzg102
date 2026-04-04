#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Urun {
    string ad;
    int    stok;
    double fiyat;
    string kategori;
};

int main() {
    const int N = 5;
    Urun envanter[N];

    // 1. Ürünleri oku
    cout << "--- URUN BILGI GIRISI ---" << endl;
    for (int i = 0; i < N; i++) {
        cout << "\n" << (i + 1) << ". urun adi      : ";
        cin  >> envanter[i].ad;
        cout << "   Stok miktari  : ";
        cin  >> envanter[i].stok;
        cout << "   Fiyati (TL)   : ";
        cin  >> envanter[i].fiyat;
        cout << "   Kategorisi    : ";
        cin  >> envanter[i].kategori;
    }

    // 2. Toplam stok değerini hesapla
    double toplamDeger = 0;
    for (int i = 0; i < N; i++)
        toplamDeger += envanter[i].stok * envanter[i].fiyat;

    cout << fixed << setprecision(2);
    cout << "\nToplam stok degeri: " << toplamDeger << " TL" << endl;

    // 3. Bubble Sort — fiyata göre küçükten büyüğe
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (envanter[j].fiyat > envanter[j + 1].fiyat) {
                Urun temp          = envanter[j];
                envanter[j]        = envanter[j + 1];
                envanter[j + 1]    = temp;
            }
        }
    }

    // 4. Sıralı tabloyu yazdır
    cout << "\n--- SIRALI URUN LISTESI (Fiyata Gore) ---" << endl;
    cout << left
         << setw(15) << "Urun Adi"
         << setw(8)  << "Stok"
         << setw(12) << "Fiyat(TL)"
         << setw(12) << "Kategori"
         << "Uyari"
         << endl;
    cout << string(60, '-') << endl;

    for (int i = 0; i < N; i++) {
        cout << fixed << setprecision(2);
        cout << left
             << setw(15) << envanter[i].ad
             << setw(8)  << envanter[i].stok
             << setw(12) << envanter[i].fiyat
             << setw(12) << envanter[i].kategori;
        // 5. Kritik stok uyarısı
        if (envanter[i].stok < 10)
            cout << "Kritik stok!";
        cout << endl;
    }
    return 0;
}
