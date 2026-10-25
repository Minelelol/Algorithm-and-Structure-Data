#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r, luas;
    // infinite loop
    while (true) {
        cout << "Masukkan jari-jari lingkaran: ";

        if (cin >> r) {
            cout << endl; break;
        }
        cerr << "Error: input harus berupa angka!" << endl;
        cin.clear();                // reset status
        cin.ignore(10000, '\n');    // clear whatever is left in the buffer
    }

    luas = M_PI * r * r;

    cout << "Luas lingkaran adalah: " << luas << endl;

    return 0;
}
