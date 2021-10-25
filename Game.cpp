#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    short hidden;
    short tebak;
    short jawaban;
    srand(time(0));
    hidden = rand() % 1000 ;
    jawaban = hidden;
    cout << "Selamat datang di game tebak angka!" << endl;
    cout << "Range angka adalah dari 0 sampai 1000" << endl;

    while (1<2){
        cout << "Tebakan:" << endl;
        cin >> tebak;
        if (tebak == jawaban){
            cout << "Selamat, anda menang!" << endl;
            break;
        }
        else if (tebak < jawaban){
                cout << "Terlalu kecil!" << endl;
                
        }
        else if (tebak > jawaban){
            cout << "Terlalu besar!" << endl;
        }
    }

}