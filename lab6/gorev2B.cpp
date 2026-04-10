#include <iostream>
using namespace std;
int main() {
    int n = 5;
    int arr[5];
    int* ptr = arr;
    for (int i = 0; i < n; i++) {
        cout << (i+1) << ". eleman: ";
        cin >> arr[i];
    }

    cout << "\nIndeks ile    : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nPointer ile   : ";
    for (int i = 0; i < n; i++) { 
        cout << *(ptr+i) << " ";
    }
    
    cout << "\nBellek adresleri:\n";
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = " << (ptr+i) << endl;
    }
    return 0;
}
