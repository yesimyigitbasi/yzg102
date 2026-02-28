#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char language[8] = {'E', 'n', 'g', 'l', 'i', 's', 'h', '\0'};
    char secondLang[] = "Spanish";
    char languages[30];
    int length;

    cout << "First language: " << language << endl;
    cout << "Second language: " << secondLang << endl;
    
    strcpy(languages, secondLang);
    cout << "strcpy(languages, secondLang): " << languages << endl;

    strcat(language, secondLang);
    cout << "strcat(language, secondLang): " << language << endl;

    length = strlen(language);
    cout << "strlen(language): " << length << endl;

    return 0;
}
