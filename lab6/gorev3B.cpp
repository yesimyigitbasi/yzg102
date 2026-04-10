#include <iostream>
using namespace std;

void minMaxBul(int arr[], int n, int* minVal, int* maxVal) {
    *minVal = arr[0];
    *maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *minVal) *minVal = arr[i];
        if (arr[i] > *maxVal) *maxVal = arr[i];
    }
}

int main() {
    // Kullanımı:
    int dizi[] = {3, 17, 5, 22, 9};
    int kucuk, buyuk;
    minMaxBul(dizi, 5, &kucuk, &buyuk);
    cout << "Min: " << &kucuk << "  Max: " << &buyuk << endl;
}

