#include <iostream>
using namespace std;
int main() {

    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr;

    // Aşağıdaki ifadelerin sonuçlarını sağ tarafa yazın:
    cout << arr[0];        // Sonuç: 10 // ilk eleman
    cout << *ptr;          // Sonuç: 10 // pointer arr esit oldugundan ilk elemani gosterir
    cout << *(ptr + 2);    // Sonuç: 30 // ptr + 2 ifadesi arr[2] yani 3. elemani gosterir
    cout << arr[3];        // Sonuç: 40 // 4. eleman
    cout << *(arr + 4);    // Sonuç: 50 // arr + 4 ifadesi arr[4] yani 5. elemani gosterir
    ptr++; 
    cout << *ptr;          // Sonuç: 20
}
