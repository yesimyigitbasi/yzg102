#include <iostream>

using namespace std;

int main()
{
    float yaricap;
    const float PI = 3.14159F;

    cout << "Yaricap degeri gir: ";
    cin >> yaricap;

    float alan = PI * yaricap * yaricap;

    cout << "Yaricapi verilen dairenin alani: " << alan << endl;

    return 0;
}
