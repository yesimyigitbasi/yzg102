#include <iostream>
#include "helpdesk.h"
using namespace std;

int main() {
    int choice;

    cout << "===== Campus Help Desk =====\n";
    cout << "1. Bilet Olustur\n";
    cout << "2. Bilet Durumu Kontrol Et\n";
    cout << "3. Sifre Sifirla\n";
    cout << "4. Destek ile Iletisime Gec\n";
    cout << "Secim Yapiniz: ";
    cin >> choice;

    switch (choice) {
        case 1: 
            openTicket();     
            break;
        case 2: 
            checkStatus();    
            break;
        case 3: 
            resetPassword();  
            break;
        case 4: 
            contactSupport(); 
            break;

        // ogrenci gorevi
        case 5:
            reportProblem();
            break;
            
        default:
            cout << "Gecersiz secim.\n";
            break;
    }

    cin.ignore();
    cin.get();
    return 0;
}