#include <iostream>

using namespace std;

int main() {
    // switch case ile basit bir hesap makinesi
    
    double sayi1, sayi2;
    char operator_;
    double sonuc;

    cout << "Birinci sayıyı girin: ";
    cin >> sayi1;

    cout << "İşleci girin (+, -, *, /): ";
    cin >> operator_;

    cout << "İkinci sayıyı girin: ";
    cin >> sayi2;

    switch (operator_) {
        case '+':
            sonuc = sayi1 + sayi2;
            cout << sayi1 << " + " << sayi2 << " = " << sonuc << endl;
            break;

        case '-':
            sonuc = sayi1 - sayi2;
            cout << sayi1 << " - " << sayi2 << " = " << sonuc << endl;
            break;

        case '*':
            sonuc = sayi1 * sayi2;
            cout << sayi1 << " * " << sayi2 << " = " << sonuc << endl;
            break;

        case '/':
            if (sayi2 != 0) {
                sonuc = sayi1 / sayi2;
                cout << sayi1 << " / " << sayi2 << " = " << sonuc << endl;
            }
            else {
                cout << "Hata: Sıfıra bölme yapılamaz!" << endl;
            }
            break;

        default:
            cout << "Geçersiz işleç! Lütfen +, -, *, / kullanın." << endl;
    }

    return 0;
}