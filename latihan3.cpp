
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Data pengukuran suhu
    vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};

    // 1. Mencari nilai 0
    bool ditemukan = false;

    for (int n : suhu) {
        if (n == 0) {
            ditemukan = true;
            break;
        }
    }

    if (ditemukan) {
        cout << "Nilai 0 ditemukan dalam array" << endl;
    } else {
        cout << "Nilai 0 tidak ditemukan dalam array" << endl;
    }

    // 2. Filter suhu positif
    vector<int> suhuPositif;

    for (int n : suhu) {
        if (n > 0) {
            suhuPositif.push_back(n);
        }
    }

    // Menampilkan hasil
    cout << "Suhu positif: ";

    for (int n : suhuPositif) {
        cout << n << " ";
    }

    cout << endl;

    return 0;
}
