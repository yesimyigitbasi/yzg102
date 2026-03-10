#include <iostream>

using namespace std;

int main() {
    
    char op;
    
    cin >> op;

    switch (op) {
        case '+':
            cout << "Toplama"; 
            break;
        
        case '-': 
            cout << "Çıkarma"; 
            //break;

        default: 
            cout << "Geçersiz işleç";
    }

    return 0;
}