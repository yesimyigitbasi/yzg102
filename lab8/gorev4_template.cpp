#include <iostream>
#include <cmath>
using namespace std;

class BankaHesabi {
    string sahibi;
    double bakiye;
    int    hesapNo;
public:
    // Constructor 1: sadece isim  → bakiye=0, hesapNo=rand()
    // Constructor 2: isim + bakiye → hesapNo=rand()
    // Constructor 3: isim + bakiye + hesapNo
    void bilgiYazdir() const {
        cout << hesapNo << " | " << sahibi << " | " << bakiye << " TL" << endl;
    }
};
