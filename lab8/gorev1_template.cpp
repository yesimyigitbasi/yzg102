#include <iostream>
#include <string>
using namespace std;

class Nokta {
    int x, y;
public:
    // TODO 1: x=0, y=0 başlatan default constructor yaz (initializer list kullan)
    // TODO 2: x ve y'yi parametreden alan constructor yaz (initializer list kullan)
    // TODO 3: void yazdir() – "(x, y)" formatında ekrana yaz
    // TODO 4: double uzaklik(Nokta diger) – iki nokta arası mesafeyi döndür
    //         sqrt( (x2-x1)^2 + (y2-y1)^2 )  →  #include <cmath> gerekir
};

int main() {
    Nokta p1;           // default → (0, 0)
    Nokta p2(3, 4);     // parametreli → (3, 4)
    p1.yazdir();        // (0, 0)
    p2.yazdir();        // (3, 4)
    cout << p1.uzaklik(p2) << endl;  // 5
}


/*
Aşağıdaki kodun çıktı ne olur?

Nokta a;
Nokta b(6, 8);
Nokta c = b;
a.yazdir();
b.yazdir();
c.yazdir();
cout << a.uzaklik(b) << endl;


CEVAP:

*/