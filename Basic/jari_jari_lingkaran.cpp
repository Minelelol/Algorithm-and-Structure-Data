#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double r, luas;

    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    if (cin.fail()) {
        cerr << "Error: input harus berupa angka!" << endl;
        return 1;
    }

    luas = M_PI * r * r;

    cout << "Luas lingkaran adalah: " << luas << endl;

    return 0;
}