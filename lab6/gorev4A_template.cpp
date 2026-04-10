#include <iostream>
using namespace std;


int main() {
    // Tek değişken
    int* p = new int;       // heap'te int için yer aç
    *p = 75;
    cout << *p << endl;     // 75
    ______ p;               // belleği serbest bırak
    p = ______;             // güvenlik için

    // Dinamik dizi (n=5)
    int n = 5;
    int* arr = ______ int[n];
    for (int i = 0; i < n; i++) arr[i] = i * 10;
    ______ arr;             // DİKKAT: tek değerden farklı!
    arr = nullptr;


}

