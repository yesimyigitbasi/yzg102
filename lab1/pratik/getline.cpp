#include <iostream>

using namespace std;

int main()
{
    string isim, yemek;
    cout << "Ismini gir: ";

    getline(cin, isim);
    cout << "Merhaba " << isim << endl;
    
    cout << "En sevdiğin yemeği gir: ";
    getline(cin, yemek);
    cout << yemek << " cok lezzetli!!" << endl;

    return 0;

}
