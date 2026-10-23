#include <iostream>
using namespace std;

int main()
{
    // KAMUS;
    int mode;
    float dollar, rupiah;
    
    
    // ALGORITMA
    cout << "1 = Dollar ke Rupiah" << endl << "2 = Rupiah ke Dollar" << endl << "Pilih salah satu mode tersebut" << endl ;
    cin >> mode; cout << endl;
    
    // INSTRUKSI
    // Aksi 1
    if (mode == 1){
        cout << "Masukkan angka Dollar untuk Konversi ke Rupiah: ";
        cin >> dollar; cout << endl;
        
        rupiah = dollar * 17500;
        
        cout << dollar << " dollar(s) berjumlah Rp" << rupiah << endl;
    }
    
    // Aksi 2
    else if (mode == 2){
        cout << "Masukkan angka Rupiah untuk Konversi ke Dollar: ";
        cin >> rupiah; cout << endl;
        
        dollar = rupiah / 17500;
        
        cout << "Rp" << rupiah << " berjumlah $" << dollar << endl;
    }
    
    // Aksi 3
    else {
        cout << "ERROR! SALAH PILIHAN MODE";
    }
    return 0;
}