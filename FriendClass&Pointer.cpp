#include <iostream>
using namespace std;
class LayangLayang {
private:
    double diagonal1, diagonal2;

public:
    void input() {
        cout << "LAYANG-LAYANG" << endl;
        cout << "Diagonal 1: ";
        cin >> diagonal1;
        cout << "Diagonal 2: ";
        cin >> diagonal2;
    }
    double luas() {
        return (diagonal1 * diagonal2)/ 2;
    }
    friend double hitungKeliling(LayangLayang);
};

class BelahKetupat {
private:
    double sisi;

public:
    void input() {
        cout << "BELAH KETUPAT" << endl;
        cout << "Panjang sisi: ";
        cin >> sisi;
    }
    double luas() {
        double d1, d2;
        cout << "Diagonal 1: ";
        cin >> d1;
         cout << "Diagonal 2: ";
        cin >> d2;
        return (d1 * d2) / 2;
    }
    double keliling() {
        return 4 * sisi;
    }
};

double hitungKeliling(LayangLayang ll) {
    double sisi1 = (ll.diagonal1/2, 2) + (ll.diagonal2/2, 2);
    return 2 * (sisi1 + sisi1);
}
int main() {
    LayangLayang layang;
    BelahKetupat ketupat;

    layang.input();
    cout << fixed << (2);
    cout << "HASIL LAYANG-LAYANG:" << endl;
    cout << "Luas     = " << layang.luas() << endl;
    cout << "Keliling = " << hitungKeliling(layang) << endl;
    
    ketupat.input();
    cout << "HASIL BELAH KETUPAT:" << endl;
    cout << "Luas     = " << ketupat.luas() << endl;
    cout << "Keliling = " << ketupat.keliling() << endl;
    
    return 0;
}
