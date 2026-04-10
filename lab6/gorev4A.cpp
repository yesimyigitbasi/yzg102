#include <iostream>
using namespace std;

int main() {
    int* p = new int;       // boşluk 1: new int
    *p = 75;
    cout << *p << endl;
    delete p;               // boşluk 2: delete
    p = nullptr;            // boşluk 3: nullptr

    int n = 5;
    int* arr = new int[n];  // boşluk 4: new
    for (int i = 0; i < n; i++) arr[i] = i * 10;
    delete[] arr;           // boşluk 5: delete[]
    arr = nullptr;

}

