#include <iostream>
using namespace std;

class Sicaklik {
private:
    float celsius;

public:
    void setCelsius(float c) {
        if (c >= -273.15)
            celsius = c;
        else
            cout << "Gecersiz sicaklik! Mutlak sifirin altina inilemez." << endl;
    }

    float getCelsius()     { return celsius; }
    float getFahrenheit()  { return celsius * 9.0 / 5.0 + 32; }
    float getKelvin()      { return celsius + 273.15; }

    void yazBilgi() {
        cout << "Celsius    : " << getCelsius()    << " C"  << endl;
        cout << "Fahrenheit : " << getFahrenheit() << " F"  << endl;
        cout << "Kelvin     : " << getKelvin()     << " K"  << endl;
    }
};

int main() {
    Sicaklik s1, s2;
    s1.setCelsius(100.0);
    s2.setCelsius(-40.0);
    s1.yazBilgi();
    s2.yazBilgi();
    s2.setCelsius(-300.0);          // gecersiz — engellenir
    cout << s2.getCelsius() << endl; // hala -40
    return 0;
}
