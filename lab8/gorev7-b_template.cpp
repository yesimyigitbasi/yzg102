#include <iostream>
using namespace std;

class Matematik {
public:
    static double pi;
    // TODO: static double daireAlan(double r)
    // TODO: static double daireCevre(double r)
    // TODO: static double kuvvet(double taban, int us)  (dongüyle hesapla)
};
double Matematik::pi = 3.14159265;

int main() {
    cout << Matematik::daireAlan(5)   << endl;  // 78.5398
    cout << Matematik::daireCevre(5)  << endl;  // 31.4159
    cout << Matematik::kuvvet(2, 10)  << endl;  // 1024
}
