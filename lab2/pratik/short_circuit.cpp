#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    // mantıksal VE &&
    if (a > 0 && b / a > 1) {
        std::cout << "Her iki koşul doğru." << std::endl;
    }

    // mantıksal VEYA ||
    if (a < 0 || b / a > 1) {
        std::cout << "En az bir koşul doğru." << std::endl;
    }

    return 0;

    int x = 0;
    if (x != 0 && 10 / x > 2) {
        std::cout << "Koşul doğru" << std::endl;
    }
    else {
        std::cout << "Güvenli çalışma" << std::endl;
    }


}