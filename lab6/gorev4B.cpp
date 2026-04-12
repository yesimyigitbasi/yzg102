#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Kac eleman? "; cin >> n;

    double* arr = new double[n];

    for (int i = 0; i < n; i++) {
        cout << (i+1) << ". deger: ";
        cin >> arr[i];
    }

    double toplam = 0;
    for (int i = 0; i < n; i++) toplam += arr[i];

    cout << "Toplam  : " << toplam     << endl;
    cout << "Ortalama: " << toplam / n << endl;

    delete[] arr;
    arr = nullptr;
    return 0;
}
