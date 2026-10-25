// 4 minutes
#include <iostream>
using namespace std;

int main()
{
    float total_b;
    int umur;
    char member;
    
    cout << "masukkan total belanja: ";
    cin >> total_b; cout << endl;
    
    cout << "masukkan umur anda: ";
    cin >> umur; cout << endl;
    
    do {
        cout << "apakah anda memiliki kartu membership? (y/n): ";
        cin >> member; cout << endl;
        
        if (member != 'y' && member != 'n'){
            cout << "ERROR! tolong pilih opsi 'y' atau 'n'" << endl;
        }
    } while (member != 'y' && member != 'n');
    
    if (umur < 30) {
        total_b = total_b * 0.9;
    }
    else if ((umur >= 30) && (umur < 60)){
        total_b = total_b * 0.8;
    }
    else if (umur >= 60){
        total_b = total_b * 0.7;
    }
    
    if (member == 'y'){
        total_b = total_b * 0.9;
    }
    
    cout << "Totalnya adalah " << total_b << endl;
}