#include <iostream>
using namespace std;


int main() {


    int tablica[100][100];
    int wiersz, kolumna, zamiana;
    cout<< "Podaj wiersze i kolumny"<<endl;
    cin >> wiersz >> kolumna;

    cout << "wpisz do tablicy"<<endl;
    if ( wiersz >= 1 && wiersz <= 100 && kolumna >= 1 && kolumna <= 100) {
        for (int i = 0; i < wiersz; i++) {
            for (int j = 0; j < kolumna; j++) {

                cin >> tablica[i][j];
            }
        }

        cout<<"(1)-zmiana wzdłuż wierszy, (2)-zmiana wzdłuż kolumn"<<endl;

        cin >> zamiana;


        if (zamiana == 2) {
            for (int i = wiersz - 1; i >= 0; i--) {
                for (int j = 0; j < kolumna; j++) {
                    cout << tablica[i][j];
                    if (j < kolumna - 1) {
                        cout << " ";
                    }
                }
                cout << endl;
            }
        } else if (zamiana == 1) {
            for (int i = 0; i < wiersz; i++) {
                for (int j = kolumna - 1; j >= 0; j--) {
                    cout << tablica[i][j];
                    if (j > 0) {
                        cout << " ";
                    }
                }
                cout << endl;
            }
        }
    } else {
        cout << "BŁĄD" << endl;
    }


    return 0;
}