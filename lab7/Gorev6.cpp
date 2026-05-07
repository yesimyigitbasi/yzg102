#include <iostream>
#include <string>
using namespace std;

class Sayac {
private:
    int deger;
public:
    Sayac& artir() { 
        this->deger++; 
        return *this; 
    }
    Sayac& azalt() { 
        this->deger--; 
        return *this; 
    }
    void yazdir()  { 
        cout << deger << endl; 
    }
};

int main() {
    Sayac s;
    s.artir().artir().artir().azalt().yazdir();
    return 0;
}