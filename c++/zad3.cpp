#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {

        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }

        cout << "*";

        for (int k = 2; k <= 2 * i - 3; ++k) {
            cout << " ";
        }

        if (i > 1) {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n - 1; i >= 1; --i) {

        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }

        cout << "*";

        for (int k = 2; k <= 2 * i - 3; ++k) {
            cout << " ";
        }

        if (i > 1) {
            cout << "*";
        }

        cout << endl;
    }
//braklo czasu i nie udalo sie zrobic parzystych :c
    return 0;
}
