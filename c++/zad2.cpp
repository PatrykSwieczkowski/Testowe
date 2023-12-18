#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string ciag;
    cin >> ciag;

    if (ciag[0] == '-') {
        cout << "BŁĄD" << endl;
        return 0;
    }

    stringstream wynik;
    wynik << "[";

    int licznik = 0;
    for (char cyfra : ciag) {
        if (cyfra == '1') {
            licznik++;
        } else if (licznik > 0) {
            wynik << licznik << (cyfra == '0' ? ", " : "");
            licznik = 0;
        }
    }

    if (licznik > 0) {
        wynik << licznik;
    }

    wynik << "]";

    cout << wynik.str() << endl;

    return 0;
}
