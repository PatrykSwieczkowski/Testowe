#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int n;


    cout << "Podaj liczbe";
    cin >> n;

    if (n > 0) {
        double e = exp(1.0);


        cout << fixed << setprecision(n);

        cout << e << endl;
    } else {
        cout << "Błąd" << endl;
    }

    return 0;
}
