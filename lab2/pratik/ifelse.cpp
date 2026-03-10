#include <iostream>
using namespace std;

int main()
{
    int score;

    cout << "Sınav puanını girin: ";
    cin >> score;

    if (score >= 0 && score <= 100) {  // dış if
        if (score >= 90) {             // iç if
            cout << "Not: A";
        }
        else if (score >= 80) {
            cout << "Not: B";
        }
        else if (score >= 70) {
            cout << "Not: C";
        }
        else if (score >= 60) {
            cout << "Not: D";
        }
        else {
            cout << "Not: F";
        }
    }
    else {
        cout << "Geçersiz puan!";
    }

    return 0;
}
