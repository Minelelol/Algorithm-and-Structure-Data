#include <iostream>
using namespace std;

int main() {
    
    // KAMUS
    float t_belanja, t_belanja_disc;
    int umur;
    char kartu;

    // ALGORITMA
    cout << "Total belanja anda adalah: ";
    cin >> t_belanja; cout << endl;

    cout << "Umur anda adalah: ";
    cin >> umur; cout << endl;

    // LOOP
    do {
        cout << "Apakah anda memiliki kartu membership? (y/n): ";
        cin >> kartu; cout << endl;
        
        if (kartu != 'y' && kartu != 'n') {
            cout << "ERROR! Mohon hanya masukkan opsi 'y' atau 'n'." << endl;
        }
    } while (kartu != 'y' && kartu != 'n');


    // AKSI 1 (diskon 10%)
    if (umur < 30) {
        // t_belanja_disc = t_belanja * 0.9;
        t_belanja_disc = t_belanja - (t_belanja * 0.1);
    }
    
    // AKSI 2 (diskon 20%)
    else if (umur >= 30 && umur < 60) {
        // t_belanja_disc = t_belanja * 0.8;
        t_belanja_disc = t_belanja - (t_belanja * 0.2);
    }
    
    // AKSI 3 (diskon 30%)
    else if (umur >= 60) {
        // t_belanja_disc = t_belanja * 0.7;
        t_belanja_disc = t_belanja - (t_belanja * 0.3);
    }
    

    // Jika ada kartu membership (diskon 10%)
    if (kartu == 'y') {
        // t_belanja_disc = t_belanja * 0.9;
        t_belanja_disc = t_belanja_disc - (t_belanja_disc * 0.1);
    }
    
    cout << "Total belanja anda setelah di proses adalah: " << t_belanja_disc << endl;

    return 0;
}