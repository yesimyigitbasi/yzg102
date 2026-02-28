#include <iostream>
#include <string>

using namespace std;

int main() {
    string tamIsim;
    int yas;
    float boy;

    cout << "Tam isminizi giriniz: ";
    getline(cin, tamIsim); 

    cout << "Yasinizi giriniz: ";
    cin >> yas;

    cout << "Boyunuzu giriniz (orn: 1.75): ";
    cin >> boy;

    cout << "\n--- Kullanici Profili ---" << endl;
    cout << "Isim: " << tamIsim << endl;
    cout << "Yas: " << yas << endl;
    cout << "Boy: " << boy << " m" << endl;

    return 0;
}