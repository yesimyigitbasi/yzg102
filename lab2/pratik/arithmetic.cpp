#include <iostream>
using namespace std;
/*
 * Aritmetik İşleçler
*/
int main()
{
    int count = 10;
    int number1 = 15;
    int number2 = 8;

    // cout << "Toplam: " << 15 + 8 << endl;
    // cout << "Fark: " << 15 - 8 << endl;
    // cout << "Çarpım: " << 15 * 8 << endl;
    // cout << "Bölüm: " << 15 / 8 << endl;
    // cout << "Kalan: " << 15 % 8 << endl;

    cout << "Toplam: " << (number1 + number2) << endl;
    cout << "Fark: " << (number1 - number2) << endl;
    cout << "Çarpım: " << (number1 * number2) << endl;
    cout << "Bölüm: " << (number1 / number2) << endl;
    cout << "Kalan: " << (number1 % number2) << endl;

    // cout << ++count << endl;
    // cout << ++count << endl;
    // cout << --count << endl;
    // cout << --count << endl;

    // cout << ++count << endl;  

    // cout << count++ << endl;

    cout << count++ << endl;
    cout << ++count << endl;
    cout << count-- << endl;
    cout << --count << endl;

    return 0;
}
