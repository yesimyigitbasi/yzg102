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
    cout << "d = " << d << "  &d = " << &d << endl;  
    cout << "*ptrD = " << *ptrD << " ptr = " << ptrD << endl;        
    cout << "c = " << c << "  &c = " << &c << endl;  
    cout << "*ptrC = " << *ptrC << " ptr = " << ptrC << endl;        

    //4
    *ptrX = 99;            
    cout << "*ptr degisitirildikten sonra x: " << x << endl;

    //5
    cout << "sizeof(int) = "  << sizeof(x)    << endl;
    cout << "sizeof(int*) = " << sizeof(ptrX)   << endl;  
    return 0;
}
