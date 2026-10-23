#include <iostream>
using namespace std;

int main()
{
    // KAMUS;
    int x,y;
    
    cout << "Masukkan nilai X: ";
    cin >> x; cout << endl;
    
    cout << "Masukkan nilai Y: ";
    cin >> y; cout << endl;
    
    if (x > 0){
        if (y > 0){
            cout << "Termasuk kuadran 1" << endl;
        }
        else {
            cout << "Termasuk kuadran 4" << endl;
        }
    }
    
    else if (y > 0){
        if (x > 0){
            cout << "Termasuk kuadran 2" << endl;
        }
        else {
            cout << "Termasuk kuadran 3" << endl;
        }
    }
    
    else {
        cout << "Tidak termasuk kuadran" << endl;
    }
    return 0;
}