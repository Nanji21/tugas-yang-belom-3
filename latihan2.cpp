
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Membuat daftar nama produk
    vector<string> produk = {
        "Laptop", "Mouse", "Keyboard", "Monitor", "Headset"
    };

    // 1. Mencari produk Keyboard
    bool ditemukan = false;

    for (string nama : produk) {
        if (nama == "Keyboard") {
            ditemukan = true;
            break;
        }
    }

    if (ditemukan) {
        cout << "Produk Keyboard ditemukan" << endl;
    } else {
        cout << "Produk Keyboard tidak ditemukan" << endl;
    }

    // 2. Filter nama produk yang panjangnya lebih dari 5 karakter
    vector<string> produkFilter;

    for (string nama : produk) {
        if (nama.length() > 5) {
            produkFilter.push_back(nama);
        }
    }

    // Menampilkan hasil filter
    cout << "Produk dengan panjang nama lebih dari 5 karakter:" << endl;

    for (string nama : produkFilter) {
        cout << nama << endl;
    }

    return 0;
}
