#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

int main() {
    string inputStr;
    float fiyat;
    int adet;

    cout << "Urun fiyatini giriniz: ";
    getline(cin, inputStr); 
    stringstream(inputStr) >> fiyat; 

    cout << "Adet giriniz: ";
    getline(cin, inputStr);
    stringstream(inputStr) >> adet; 

    float toplam = fiyat * adet; 
    cout << "Toplam maliyet: " << toplam << endl;

    return 0;
}