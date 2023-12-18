#include <iostream>
#include <string>

using namespace std;

string b(const string& ciag) {
    string wyraz = "";
    for (size_t i = 0; i < ciag.length(); ++i) {
        int a = i + 1;
        wyraz += string(a, ciag[i]);
    }
    return wyraz;
}

int main() {
    string c;
    cin >> c;
    for (char znak : c) {
        if (!isalpha(znak)) {
            cout << "BŁĄD" << endl;
            return 0;
        }
    }
    string wynik = b(c);
    cout << wynik << endl;

    return 0;
}
