
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Data nilai awal
    vector<int> nilai = {60, 85, 40, 90, 75, 50, 95};

    // Mencari nilai 85
    bool ditemukan = false;

    for (int i = 0; i < nilai.size(); i++) {
        if (nilai[i] == 85) {
            cout << "Nilai 85 ditemukan pada indeks: " << i << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Nilai 85 tidak ditemukan" << endl;
    }

    // Menyaring nilai yang lulus
    vector<int> nilaiLulus;

    for (int n : nilai) {
        if (n >= 75) {
            nilaiLulus.push_back(n);
        }
    }

    // Menampilkan nilai lulus
    cout << "Nilai yang lulus: ";

    for (int n : nilaiLulus) {
        cout << n << " ";
    }

    cout << endl;

    return 0;
}
