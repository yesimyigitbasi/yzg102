#include <iostream>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    // Aşağıdaki ifadelerin sonuçlarını sağ tarafa yazın:
    cout << arr[0];        // Sonuç: ______
    cout << *ptr;          // Sonuç: ______
    cout << *(ptr + 2);    // Sonuç: ______
    cout << arr[3];        // Sonuç: ______
    cout << *(arr + 4);    // Sonuç: ______
    ptr++;
    cout << *ptr;          // Sonuç: ______
}
