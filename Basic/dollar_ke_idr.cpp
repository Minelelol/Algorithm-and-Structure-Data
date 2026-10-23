#include <iostream>
using namespace std;

int main()
{
    double dollar;
    cout << "Masukkan angka untuk konversi dollar ke rupiah: ";
    cin >> dollar;

    double rupiah = dollar * 17500;

    cout << endl << "$" << dollar << " ke Rupiah Indonesia adalah " << "Rp" << rupiah << endl;

    return 0;
}