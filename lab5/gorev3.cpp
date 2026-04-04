#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int A[3][3], B[3][3], C[3][3];

    // A matrisini oku
    cout << "A matrisini girin (3x3):" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> A[i][j];

    // B matrisini oku
    cout << "B matrisini girin (3x3):" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> B[i][j];

    // Toplama: C = A + B
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            C[i][j] = A[i][j] + B[i][j];

    // C matrisini ekrana yaz
    cout << "\nA + B Sonuc Matrisi:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << setw(4) << C[i][j];
        cout << endl;
    }

    // Ana köşegenin toplamı (C[0][0], C[1][1], C[2][2])
    int kosegen = 0;
    for (int i = 0; i < 3; i++)
        kosegen += C[i][i];

    cout << "\nAna kosegenin toplami: " << kosegen << endl;

    return 0;
}
