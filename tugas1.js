
// Data nilai awal
let nilai = [60, 85, 40, 90, 75, 50, 95];

// Mencari nilai 85
let ditemukan = false;

for (let i = 0; i < nilai.length; i++) {
    if (nilai[i] === 85) {
        console.log("Nilai 85 ditemukan pada indeks:", i);
        ditemukan = true;
    }
}

if (!ditemukan) {
    console.log("Nilai 85 tidak ditemukan");
}

// Menyaring nilai yang lulus
let nilaiLulus = [];

for (let n of nilai) {
    if (n >= 75) {
        nilaiLulus.push(n);
    }
}

// Menampilkan nilai lulus
console.log("Nilai yang lulus:", nilaiLulus);
