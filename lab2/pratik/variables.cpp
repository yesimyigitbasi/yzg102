#include <iostream>
using namespace std;

int main() {
    // atama başlatma - assignment initialization
    int a = 5;   
    int a2 = 5.9;
    float a3 = 5.9;

    // doğrudan başlatma - direct initialization
    int b(3);   
    int b2(3.4);   
    float b3(3.4);

    // homojen (küme parantezi) başlatma  - uniform (brace) initialization
    int c{2};   
    // int c2{2.5};   // hatalı 
    float c2{2.5};     
    float c3{2};       


    cout << "a = " << a << endl;
    cout << "a2 = " << a2 << endl;
    cout << "a3 = " << a3 << endl;

    cout << "b = " << b << endl;
    cout << "b2 = " << b2 << endl;
    cout << "b3 = " << b3 << endl;

    cout << "c = " << c << endl;
    // cout << "c2 = " << c2 << endl;
    cout << "c3 = " << c3 << endl;

    int result = a + b;
    cout << "result after a + b = " << result << endl;

    result -= c;   // result = result - c; için kısa yazım
    cout << "result after subtracting c = " << result << endl;

    return 0;
}
