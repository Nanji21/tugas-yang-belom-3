
// Membuat daftar nama produk
let produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"];

// 1. Mencari produk Keyboard
if (produk.includes("Keyboard")) {
    console.log("Produk Keyboard ditemukan");
} else {
    console.log("Produk Keyboard tidak ditemukan");
}

// 2. Filter nama produk yang panjangnya lebih dari 5 karakter
let produkFilter = [];

for (let nama of produk) {
    if (nama.length > 5) {
        produkFilter.push(nama);
    }
}

// Menampilkan hasil filter
console.log("Produk dengan panjang nama lebih dari 5 karakter:");
console.log(produkFilter);
