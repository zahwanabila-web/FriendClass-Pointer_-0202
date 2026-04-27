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
    
};