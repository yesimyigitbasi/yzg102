#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char str1[50] = "Merhaba "; 
    char str2[] = "Dunya";
    char kopya[50];
    int uzunluk;

    // Kopyalama
    strcpy(kopya, str1);

    cout << kopya << endl;

    // Birleştirme
    strcat(kopya, str2);

    cout << kopya << endl;

    // Uzunluk
    uzunluk = strlen(kopya); 

    cout << "Birlestirilmis string: " << kopya << endl;
    cout << "Toplam uzunluk: " << uzunluk << endl;

    return 0;
}