#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int* grade;
    Student(string n, int g) : name(n) {
        grade = new int(g);
    }
    ~Student() { delete grade; }
    // Copy constructor YOK → derleyici shallow copy üretiyor
};

int main() {
    Student s1("Ali", 90);
    Student s2 = s1;       // shallow copy!
    *s2.grade = 50;        // s1.grade da 50 olur!
    cout << *s1.grade << endl;  // Beklenen: 90  Gerçek: ?
    cout << *s2.grade << endl;
}  // destructor: s2 siler → s1'in grade'i dangling pointer!
