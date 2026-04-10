#include <iostream>
using namespace std;

int main() {
    // 1
    int    x   = 42;
    double d   = 3.14;
    char   c   = 'A';

    // 2
    int*    ptrX = &x;       
    double* ptrD = &d;        
    char*   ptrC = &c;      

    // 3
    cout << "x = " << x << "  &x = " << &x << endl;  
    cout << "*ptrX = " << *ptrX << " ptr = " << ptrX << endl;            

    //4
    *ptrX = 99;            
    cout << "*ptr degisitirildikten sonra x: " << x << endl;

    //5
    cout << "sizeof(int) = "  << sizeof(int)    << endl;
    cout << "sizeof(int*) = " << sizeof(int*)   << endl;  
    return 0;
}
