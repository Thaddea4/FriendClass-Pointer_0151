#include <iostream>
#include <cmath>
using namespace std;


class BelahKetupat;

class LayangLayang{
private:
    double d1, d2, sisi;


public:
    void inputData(){
        cout << "Layang-Layang\n";
        cout << "Masukkan diagonal 1: "; cin >> d1;
        cout << "Masukkan diagonal 2: "; cin >> d2;
        cout << "Masukkan sisi: "; cin >> sisi;
    }

    double hitungLuas(){
        return 0.5 * d1 * d2;
    }

    void output(){
        cout << "Luas Layang-Layang: " << hitungLuas() << endl;
        cout << "Keliling Layang-Layang: " << keliling(*this) << endl;
    }

    friend double keliling(LayangLayang &l);
};

class BelahKetupat {
private:
    double d1, d2, sisi;

public:
   void inputData(){
       cout << "\nBelah Ketupat\n";
       cout << "Masukkan diagonal 1: "; cin >> d1;
       cout << "Masukkan diagonal 2: "; cin >> d2;
       cout << "Masukkan sisi: "; cin >> sisi;
    }

    double hitungLuas(){
        return 0.5 * d1 * d2;
    }