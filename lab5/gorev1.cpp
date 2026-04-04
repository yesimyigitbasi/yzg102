#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Kac sayi gireceksiniz? ";
    cin >> n;

    
    int sayilar[100];
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". sayi: ";
        cin >> sayilar[i];
    }

    float toplam = 0;
    int maks = sayilar[0];
    int min  = sayilar[0];

    for (int i = 0; i < n; i++) {
        toplam += sayilar[i];
        if (sayilar[i] > maks) maks = sayilar[i];
        if (sayilar[i] < min)  min  = sayilar[i];
    }

    cout << "------------------------------" << endl;
    cout << "Toplam   : " << (int)toplam      << endl;
    cout << "Ortalama : " << toplam / n << endl;
    //cout << "Ortalama : " << fixed << setprecision(2) << toplam / n << endl;    // fixed << setprecision(2) - formats the output as a fixed-point decimal with exactly 2 decimal places
    cout << "Maksimum : " << maks             << endl;
    cout << "Minimum  : " << min              << endl;
}