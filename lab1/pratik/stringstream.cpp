#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string stringVal;
    float fiyat = 0.0;
    int miktar = 0;

    cout << "Fiyat gir: "; 
    getline(cin, stringVal); 
    stringstream(stringVal) >> fiyat; 
    cout << "Miktar gir: ";
    getline(cin, stringVal);
    stringstream(stringVal) >> miktar;
    cout << "Toplam fiyat: " << fiyat*miktar << endl; 
    return 0;
}
