#include <iostream>
#include "helpdesk.h"
using namespace std;

void openTicket()      { 
    cout << "Bilet olusturuldu.\n"; 
}

void checkStatus()     { 
    cout << "Bilet durumu kontrol ediliyor...\n"; 
}

void resetPassword()   { 
    cout << "Sifre sifirlama istegi gonderildi.\n"; 
}

void contactSupport()  { 
    cout << "Destek ile iletisime gecmek için: ithelp@campus.edu\n"; 
}

void reportProblem() {
    cout << "Problemi raporlamak icin:";
}

// ogrenci gorevi
void reportProblem() {
    cout << "Problemi raporlamak icin: report@campus.edu\n";
}