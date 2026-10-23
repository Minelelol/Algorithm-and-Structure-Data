#include <iostream>
using namespace std;

int main()
{
    float t_belanja, t_belanja_disc;
    int umur;
    char kartu;
    
    cout << "Total belanja anda adalah: ";
    cin >> t_belanja; cout << endl;
    
    cout << "Umur anda adalah: ";
    cin >> umur; cout << endl;
    
    cout << "Apakah anda memiliki membership? (y/n): ";
    cin >> kartu; cout << endl;
    
    if (kartu == 'y') {
        if (umur < 30) {
            t_belanja_disc = t_belanja - (t_belanja * 0.1) - (t_belanja * 0.1);
            
            cout << "Total belanja anda setelah di proses adalah: " << t_belanja_disc << endl;
        }
        if (umur < 60) {
            t_belanja_disc = t_belanja - (t_belanja * 0.2) - (t_belanja * 0.1);
            
            cout << "Total belanja anda setelah di proses adalah: " << t_belanja_disc << endl;
        }
        if (umur >= 60) {
            t_belanja_disc = t_belanja - (t_belanja * 0.3) - (t_belanja * 0.1);
            
            cout << "Total belanja anda setelah di proses adalah: " << t_belanja_disc << endl;
        }
    }
    
    else if (kartu == 'n') {
        if (umur < 30) {
            t_belanja_disc = t_belanja - (t_belanja * 0.1);
            
            cout << "Total belanja anda setelah di proses adalah: " << t_belanja_disc << endl;
        }
        if (umur < 60) {
            t_belanja_disc = t_belanja - (t_belanja * 0.2);
            
            cout << "Total belanja anda setelah di proses adalah: " << t_belanja_disc << endl;
        }
        if (umur >= 60) {
            t_belanja_disc = t_belanja - (t_belanja * 0.3);
            
            cout << "Total belanja anda setelah di proses adalah: " << t_belanja_disc << endl;
        }
    }
    
    else {
        cout << "ERROR! TOLONG PILIH OPSI YANG BENAR." << endl;
    }
}