#include <iostream>
using namespace std;

class Sayac {
    int id;
public:
    static int toplamNesne;
    // TODO: default constructor → ++toplamNesne; id = toplamNesne;
    // TODO: destructor        → --toplamNesne; cout ile bildir
    // TODO: static int getToplamNesne()
    void yazdir() const { cout << "Nesne #" << id << endl; }
};
int Sayac::toplamNesne = 0;

int main() {
    Sayac a, b;
    cout << Sayac::getToplamNesne() << endl;  // 2
    {
        Sayac c;
        cout << Sayac::getToplamNesne() << endl;  // 3
    }  // c yıkılır
    cout << Sayac::getToplamNesne() << endl;  // 2
}
