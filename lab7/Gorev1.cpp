#include <iostream>
using namespace std;

class Dikdortgen {
public:            
    float genislik;
    float yukseklik;

    float alan() {
        return genislik * yukseklik;  
    }

    float cevre() {
        return 2 * (genislik + yukseklik);
    }

    void yazBilgi() {
        cout << "Boyut  : " << genislik << " x " << yukseklik << endl;
        cout << "Alan   : " << alan()   << " cm2" << endl;  
        cout << "Cevre  : " << cevre()  << " cm"  << endl; 
    }
};

int main() {
    Dikdortgen d1, d2, d3;
    d1.genislik = 5.0;  d1.yukseklik = 3.0;
    d2.genislik = 8.5;  d2.yukseklik = 4.2;
    d3.genislik = 10.0; d3.yukseklik = 2.5;

    cout << "--- Dikdortgen 1 ---" << endl; d1.yazBilgi();
    cout << "--- Dikdortgen 2 ---" << endl; d2.yazBilgi();
    cout << "--- Dikdortgen 3 ---" << endl; d3.yazBilgi();
    return 0;
}
